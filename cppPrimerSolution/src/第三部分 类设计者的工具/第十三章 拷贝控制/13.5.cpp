//Á·Ï°13.39&&13.40&&13.42£º
//#include<memory>
//#include<string>
//#include<iostream>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<fstream>
//#include<algorithm>
//class StrVec {
//public:
//	StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
//	StrVec(std::initializer_list<std::string> temp);
//	StrVec(const StrVec&);
//	StrVec& operator=(const StrVec&);
//	~StrVec() { free(); }
//	void push_back(const std::string&);
//	std::size_t size() const { return first_free - elements; }
//	std::size_t capacity() const { return cap - elements; }
//	std::string* begin() const { return elements; }
//	std::string* end() const { return first_free; }
//	void reserve(std::size_t n);
//	void resize(std::size_t n);
//	void resize(std::size_t n,const std::string& s);
//private:
//	static std::allocator<std::string> alloc;
//	void chk_n_alloc() { if (size() >= capacity()) reallocate(); }
//	std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
//	void free();
//	void reallocate(std::size_t capacity);
//	void reallocate();
//	std::string* elements;
//	std::string* first_free;
//	std::string* cap;
//
//};
//std::allocator<std::string> StrVec::alloc;
//StrVec::StrVec(std::initializer_list<std::string> temp)
//{
//	auto newdata = alloc_n_copy(temp.begin(), temp.end());
//	elements = newdata.first;
//	first_free = cap = newdata.second;
//}
//
//void StrVec::push_back(const std::string& s)
//{
//	chk_n_alloc();
//	alloc.construct(first_free++, s);
//}
//
//void StrVec::reserve(std::size_t n)
//{
//	if (n > capacity())
//		reallocate(n);
//}
//
//void StrVec::resize(std::size_t n)
//{
//	while (n > size())
//		push_back("");
//	while (n < size())
//		alloc.destroy(--first_free);	
//}
//void StrVec::resize(std::size_t n,const std::string& s)
//{
//	while (n > size())
//		push_back(s);
//}
//
//
//std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string* b, const std::string* e) {
//	auto data = alloc.allocate(e - b);
//	return { data,std::uninitialized_copy(b,e,data) };
//}
//
////void StrVec::free()
////{
////	if (elements)
////	{
////		for (auto p = first_free; p != elements;)
////			alloc.destroy(--p);
////		alloc.deallocate(elements,cap - elements);
////	}
////}
//void StrVec::free()
//{
//	if (elements)
//	{
//		std::for_each(elements, first_free, [](std::string& s) {alloc.destroy(&s); });
//		alloc.deallocate(elements, cap - elements);
//	}
//}
//StrVec::StrVec(const StrVec& s)
//{
//	auto newdata = alloc_n_copy(s.begin(), s.end());
//	elements = newdata.first;
//	first_free = cap = newdata.second;
//}
//
//
//StrVec& StrVec::operator=(const StrVec& rhs)
//{
//	auto data = alloc_n_copy(rhs.begin(), rhs.end());
//	free();
//	elements = data.first;
//	first_free = cap = data.second;
//	return *this;
//}
//
//void StrVec::reallocate(std::size_t capacity)
//{
//	auto newcapacity = capacity;
//	auto newdata = alloc.allocate(newcapacity);
//	auto dest = newdata;
//	auto elem = elements;
//	for (std::size_t i = 0; i != size(); ++i)
//		alloc.construct(dest++, std::move(*elem++));
//	elements = newdata;
//	first_free = dest;
//	cap = elements + newcapacity;
//}
//
//void StrVec::reallocate()
//{
//	auto newcapacity = capacity() ? 2 * capacity() : 1;
//	auto newdata = alloc.allocate(newcapacity);
//	auto dest = newdata;
//	auto elem = elements;
//	for (std::size_t i = 0; i != size(); ++i)
//		alloc.construct(dest++, std::move(*elem++));
//	elements = newdata;
//	first_free = dest;
//	cap = elements + newcapacity;
//}
//
//class TextQuery
//{
//	
//private:
//	StrVec v;
//	std::map<std::string,int> m;
//public:
//	friend class QueryResult;
//	TextQuery(std::ifstream& ifs) {
//		std::string temp;
//		int count = 0;
//		while (std::getline(ifs, temp))
//		{
//			v.push_back(temp);
//			std::cout << temp << std::endl;
//			m[temp] = ++count;
//		}
//	}
//	void show() {
//		for (auto i : m)
//			std::cout << i.second << " " << i.first << std::endl;
//	}
//};
//
//class QueryResult {
//public:
//	
//	void find(TextQuery& t,const std::string& query)
//	{
//		std::cout << std::endl;
//		std::string temp;
//		for (auto i : t.v)
//		{
//			std::istringstream is(i);
//			while (is >> temp)
//				if (temp == query)
//					std::cout << i << std::endl;
//		}
//	}
//};
//
//int main()
//{
//	std::ifstream ifs("data1");
//	TextQuery t1(ifs);
//	//t1.show();
//	QueryResult q;
//	q.find(t1,"she");
//}

//Á·Ï°13.44£º
//#include<memory>
//#include<iostream>
//class String
//{
//public:
//	String():elements(nullptr),first_free(nullptr),cap(nullptr){}
//	String(const char* s);
//private:
//	static std::allocator<char> alloc;
//	char* elements;
//	char* first_free;
//	char* cap;
//};
//std::allocator<char> String::alloc;
//String::String(const char* s)
//{
//	int count = 0;
//	while (s[count]) count++;
//	auto newdata = alloc.allocate(count);
//	for (int i = 0; i < count; ++i)
//		alloc.construct(newdata + i, s[i]);
//	elements = newdata;
//	cap = first_free = newdata + count;
//	for (auto i = newdata; i != cap; ++i)
//		std::cout << *i;
//}
//
//int main()
//{
//	String("vec");
//}