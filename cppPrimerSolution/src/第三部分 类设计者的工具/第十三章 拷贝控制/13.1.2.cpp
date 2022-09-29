//Á·Ï°13.8:
//#include<string>
//#include<iostream>
//class HasPtr {
//public:
//	std::string* ps;
//	int i;
//	HasPtr(const std::string& s = std::string()):ps(new std::string(s)), i(0) {};
//	HasPtr(const HasPtr& s) {
//		ps = new std::string(*s.ps);
//		i = s.i;
//	}
//	HasPtr& operator = (const HasPtr& temp)
//	{
//		auto newps = temp;
//		delete ps;
//		ps = new std::string(*newps.ps);
//		i = temp.i;
//		return *this;
//	}
//};
//
//int main()
//{
//	HasPtr h1;
//	HasPtr h2;
//	h2 = h1;
//	std::cout << h1.ps << std::endl;
//	std::cout << h2.ps;
//}