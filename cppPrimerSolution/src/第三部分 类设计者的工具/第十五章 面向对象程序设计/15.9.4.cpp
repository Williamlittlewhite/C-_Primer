//Á·Ï°15.41:
#include"TextQuery.h"
#include<algorithm>
#include<fstream>
class Query_base {
	friend class Query;
protected:
	using line_no = TextQuery::line_no;
	virtual ~Query_base() = default;
private:
	virtual QueryResult eval(const TextQuery&)const = 0;
	virtual std::string rep()const = 0;
};

class WordQuery :public Query_base {
	friend class Query;
	std::string query_word;
	WordQuery(const std::string& s) :query_word(s) { std::cout << "WordQuery(const std::string& s)!" << std::endl; }
	QueryResult eval(const TextQuery& t)const { return t.query(query_word); }
	std::string rep()const { std::cout << "WordQuery rep!" << std::endl; return query_word; }
};
class Query {
	friend Query operator~ (const Query&);
	friend Query operator| (const Query&, const Query&);
	friend Query operator& (const Query&, const Query&);
public:
	Query(const std::string& s):q(new WordQuery(s)),uc(new int(1)){}
	Query(const Query& query) :q(query.q), uc(query.uc) { ++* uc; }
	Query& operator= (const Query& query)
	{
		++* query.uc;
		if (-- * uc == 0)
		{
			delete q;
			delete uc;
		}
		q = query.q;
		uc = query.uc;
		return *this;
	}
	~Query() {
		if (-- * uc == 0)
		{
			delete q; delete uc;
		}
	}
	QueryResult eval(const TextQuery& t)const { return q->eval(t); }
	std::string rep() const {
		std::cout << "Query rep!" << std::endl;
		return q->rep();
	}
private:
	Query(Query_base* query) :q(query), uc(new int(1)) {};
	Query_base* q;
	int* uc;
};
std::ostream& operator<<(std::ostream& os, const Query& query)
{
	std::cout << "Query<< rep!" << std::endl;
	return os << query.rep();
}


class NotQuery :public Query_base {
	friend Query operator~(const Query&);
	NotQuery(const Query& q) :query(q) { std::cout << "NotQuery(const Query& q)!" << std::endl; }
	std::string rep()const { std::cout << "NotQuery rep!" << std::endl; return "~(" + query.rep() + ")"; }
	QueryResult eval(const TextQuery&) const;
	Query query;
};
inline Query operator~(const Query& operand)
{
	return new NotQuery(operand);
}
QueryResult NotQuery::eval(const TextQuery& text)const
{
	auto result = query.eval(text);
	auto ret_lines = std::make_shared<std::set<line_no>>();
	auto beg = result.begin(), end = result.end();
	auto sz = result.get_file()->size();
	for (std::size_t n = 0; n <= sz; n++)
	{
		if (beg == end || *beg != n)
			ret_lines->insert(n);
		else if (beg != end)
			++beg;
	}
	return QueryResult(rep(), ret_lines, result.get_file());
}
class BinaryQuery :public Query_base {
protected:
	BinaryQuery(const Query& l, const Query& r, std::string s) :lhs(l), rhs(r), opSym(s) {
		std::cout << "BinaryQuery(const Query& l,const Query& r,std::string s)" << std::endl;
	}
	std::string rep() const { std::cout << "BinaryQuery rep!" << std::endl; return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")"; }
	Query lhs, rhs;
	std::string opSym;
};

class AndQuery :public BinaryQuery {
	friend Query operator&(const Query&, const Query&);
	AndQuery(const Query& left, const Query& right) :BinaryQuery(left, right, "&") {
		std::cout << "AndQuery(const Query& left, const Query& right)" << std::endl;
	}
	QueryResult eval(const TextQuery&)const;
};
inline Query operator&(const Query& l, const Query& r) {
	return new AndQuery(l, r);;
}
QueryResult AndQuery::eval(const TextQuery& text)const
{
	auto left = lhs.eval(text), right = lhs.eval(text);
	auto ret_lines = std::make_shared<std::set<line_no>>();
	std::set_intersection(left.begin(), left.end(), right.begin(), right.end(),
		std::inserter(*ret_lines, ret_lines->begin()));
	return QueryResult(rep(), ret_lines, left.get_file());
}
class OrQuery :public BinaryQuery {
	friend Query operator|(const Query&, const Query&);
	OrQuery(const Query& left, const Query& right) :BinaryQuery(left, right, "|") {
		std::cout << "OrQuery(const Query&left, const Query& right)" << std::endl;
	}
	QueryResult eval(const TextQuery&)const;
};
inline Query operator|(const Query& l, const Query& r)
{
	std::cout << "" << std::endl;
	return new OrQuery(l,r);
}
QueryResult OrQuery::eval(const TextQuery& text)const {
	auto right = rhs.eval(text), left = lhs.eval(text);
	auto ret_lines = std::make_shared<std::set<line_no>>(left.begin(), left.end());
	ret_lines->insert(right.begin(), right.end());
	return QueryResult(rep(), ret_lines, left.get_file());
}

//Á·Ï°15.42(c)
std::ostream& prints(std::ostream& os, const QueryResult& qr, int beg, int end)
{
	os << qr.sought << " occurs " << qr.lines->size() << " " << "time(s)" << std::endl;
	for (auto num : *qr.lines)
		if (num + 1 >= beg && num + 1 <= end)
			os << "\t(line" << num + 1 << ")" << *(qr.file->begin() + num) << std::endl;
	return os;
}
int main()
{
	Query q = Query("fiery") & Query("bird") | Query("wind");
	std::cout << q;

	std::ifstream ifs("storyDataFile");
	TextQuery t(ifs);
	auto temp = q.eval(t);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	for (auto i = temp.begin(); i != temp.end(); ++i)
		std::cout << *i << " ";
	prints(std::cout, temp, 1, 10);
	return 0;
}