//Á·Ï°14.7£º
//#include<memory>
//#include<iostream>
//class String
//{
//public:
//	String():elements(nullptr),first_free(nullptr),cap(nullptr){}
//	String(const char* s);
//	friend std::ostream& operator<<(std::ostream& os, const String& s);
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
//}
//std::ostream& operator<<(std::ostream& os, const String& s)
//{
//	for (auto i = s.elements; i != s.first_free; ++i)
//		os << *i;
//	return os;
//}
//int main()
//{
//	String s("vector NB!");
//	std::cout << s ;
//}


