//练习13.47：
//#include<memory>
//#include<iostream>
//class String
//{
//public:
//	String():elements(nullptr),first_free(nullptr),cap(nullptr){}
//	String(const char* s);
//	String(const String& s);
//	String& operator= (const String s);
//	std::size_t size()const
//	{
//		return first_free - elements;
//	}
//	std::size_t capacity()const
//	{
//		return cap - elements;
//	}
//	char* begin()const {
//		return elements;
//	}
//	char* end() const {
//		return first_free;
//	}
//private:
//	static std::allocator<char> alloc;
//	char* elements;
//	char* first_free;
//	char* cap;
//};
//std::allocator<char> String::alloc;
//String::String(const char* s)
//{
//	
//	int count = 0;
//	while (s[count]) count++;
//	auto newdata = alloc.allocate(count);
//	for (int i = 0; i < count; ++i)
//		alloc.construct(newdata + i, s[i]);
//	elements = newdata;
//	cap = first_free = newdata + count;
//	
//}
//
//String::String(const String& s)
//{
//	std::cout << "拷贝构造函数被调用" << std::endl;
//	auto newdata = alloc.allocate(s.capacity());
//	elements = newdata;
//	first_free = newdata + s.size();
//	cap = newdata + s.capacity();
//	std::uninitialized_copy(s.begin(), s.end(), newdata);
//}
//String& String::operator= (const String s)
//{
//	elements = first_free = cap = nullptr;
//	auto newdata = alloc.allocate(s.capacity());
//	elements = newdata;
//	first_free = newdata + s.size();
//	cap = newdata + s.capacity();
//	std::uninitialized_copy(s.begin(), s.end(), newdata);
//	return *this;
//}
//int main()
//{
//	String v("vec"),b("ee");
//	for (auto i = v.begin(); i != v.end(); ++i)
//		std::cout << *i;
//	std::cout << std::endl;
//	String s = v;
//	for (auto i = s.begin(); i != s.end(); ++i)
//		std::cout << *i;
//	s = b;
//	std::cout << std::endl;
//	for (auto i = s.begin(); i != s.end(); ++i)
//		std::cout << *i;
//}

//练习:13.48
//#include<vector>
//int main()
//{
//	std::vector<String> v;
//	String s1("One"), s2("Two");
	//String s3(s2);
	//v.push_back(s1);
	//v.push_back(std::move(s2));
	//v.push_back(String("Three"));
	//v.emplace_back("Four");
//}
