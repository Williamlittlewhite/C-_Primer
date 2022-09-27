////Á·Ï°12.19£º
#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<stdexcept>
class StrBlobPtr;
class StrBlob {
	friend class StrBlobPtr;
private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(std::vector<std::string>::size_type i, const std::string& msg) const {
		if (i >= data->size())
			throw std::out_of_range(msg);
	}
public:
	StrBlob():data(std::make_shared<std::vector<std::string>>()){};
	StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)) {};
	std::vector<std::string>::size_type size() const { return data->size(); }
	bool empty()const { return data->empty(); }
	void push_back(const std::string& t) { data->push_back(t); }
	void pop_back() {
		check(0, "pop back on empty StrBlob");
		data->pop_back();
	}
	std::string& front()
	{
		check(0, "front on empty StrBlob");
		return data->front();
	}
	const std::string& front() const
	{
		check(0, "front on empty StrBlob");
		return data->front();
	}
	std::string& back()
	{
		check(0, "back on empty StrBlob");
		return data->back();
	}
	const std::string& back() const
	{
		check(0, "back on empty StrBlob");
		return data->back();
	}
	StrBlobPtr begin();
	StrBlobPtr end();
	StrBlobPtr begin() const;
	StrBlobPtr end() const;
};

class StrBlobPtr
{
	friend bool eq(const StrBlobPtr&, const StrBlobPtr&);
private:
	std::shared_ptr<std::vector<std::string>> check(std::vector<std::string>::size_type i, const std::string& msg) const {
		auto ret = wptr.lock();
		if (!ret)
			throw std::runtime_error("Unbound StrBlobPtr");
		if (i >= ret->size())
			throw std::out_of_range(msg);
		return ret;
	}
	std::weak_ptr<std::vector<std::string>> wptr;
	std::vector<std::string>::size_type curr;
public:
	StrBlobPtr() :curr(0) {};
	StrBlobPtr(StrBlob& a, std::vector<std::string>::size_type sz = 0) :wptr(a.data), curr(sz) {};
	StrBlobPtr(const StrBlob& a, std::vector<std::string>::size_type sz = 0) :wptr(a.data), curr(sz) {};


	std::string& deref() const{
		auto p = check(curr, "dereference past end");
		return (*p)[curr];
	}

	StrBlobPtr& incr() {
		check(curr, "increment past end of StrBlobPtr");
		++curr;
		return *this;
	}
	StrBlobPtr& decr() {
		--curr;
		check(curr, "decrement past begin of StrBlobPtr");
		return *this;
	}
};

StrBlobPtr StrBlob::begin() {
	return StrBlobPtr(*this,0);
}
StrBlobPtr StrBlob::end() {
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}
StrBlobPtr StrBlob::begin() const{
	return StrBlobPtr(*this, 0);
}
StrBlobPtr StrBlob::end() const{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

inline bool eq(const StrBlobPtr& lhs, const StrBlobPtr& rhs)
{
	auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
	if (l == r)
		return (!r || lhs.curr == rhs.curr);
	else
		return false;
}
//
inline bool neq(const StrBlobPtr& lhs, const StrBlobPtr& rhs)
{
	return !eq(lhs, rhs);
}

//int main()
//{
//	StrBlob b1;
//	{
//		StrBlob b2 = { "a","an","the" };
//		b1 = b2;
//		b2.push_back("about");
//		std::cout << b2.size() << std::endl;
//	}
//	std::cout << b1.size() << std::endl;
//	std::cout << b1.front() << " " << b1.back() << std::endl;
//
//	const StrBlob b3 = b1;
//	std::cout << b3.front() << " " << b3.back() << std::endl;
//
//	for (auto it = b1.begin(); neq(it, b1.end()); it.incr())
//		std::cout << it.deref() << std::endl;
//	return 0;
//}
//
//Á·Ï°12.20£º
//#include<iostream>
//#include<fstream>
//#include<sstream>
//int main()
//{
//	std::fstream ifs("data");
//	std::string temp;
//	StrBlob res;
//	while (std::getline(ifs, temp))
//	{
//		std::istringstream is(temp);
//		std::string word;
//		while (is>>word)
//		{
//			res.push_back(word);
//		}
//	}
//	for (auto i = res.begin(); neq(i, res.end()); i.incr())
//		std::cout << i.deref() << " ";
//}
//Á·Ï°12.22£º
//int main()
//{
//	const StrBlob b = { "hello","world","!" };
//	for (auto it = b.begin(); neq(it, b.end()); it.incr())
//		std::cout << it.deref() << std::endl;
//	return 0;
//}