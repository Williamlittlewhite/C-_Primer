//Á·Ï°14.26£º
//#include<memory>
//#include<vector>
//#include<string>
//#include<iostream>
//class StrBlob {
//private:
//	std::vector<std::string> v{ "me","i","you","words" };
//	std::shared_ptr<std::vector<std::string>> data = std::make_shared<std::vector<std::string>> (v);
//public:
//	std::string& operator[](std::size_t n)
//	{
//		return (* data)[n];
//	}
//	const std::string& operator[](std::size_t n)const
//	{
//		return (*data)[n];
//	}
//};
//class StrBlobPtr {
//public:
//	std::weak_ptr<std::vector<std::string>> wptr;
//	std::size_t curr;
//public:
//	std::string& operator[](std::size_t n) {
//		auto t = wptr.lock();
//		return (*t)[n];	
//	}
//	const std::string& operator[](std::size_t n) const {
//		auto t = wptr.lock();
//		return (*t)[n];
//	}
//};
//class StrVec {
//private:
//	static std::allocator<std::string> alloc;
//	std::string* elements=0;
//	std::string* first_free=0;
//	std::string* cap=0;
//	
//public:
//	std::string& operator[](std::size_t n) { return elements[n]; }
//	const std::string& operator[](std::size_t n) const { return elements[n];}
//};
//
//class String {
//private:
//	char* str;
//public:
//	char& operator[](std::size_t n) { return str[n]; }
//	const char& operator[](std::size_t n)const { return str[n]; }
//	
//};
//
//int main()
//{
//	std::vector<std::string> v{ "me","i","you","words" };
//	std::shared_ptr<std::vector<std::string>> data = std::make_shared<std::vector<std::string>>(v);
//	StrBlobPtr s1;
//	s1.wptr = data;
//	//StrBlob s2 = s1;
//	std::cout << s1[2];
//}
