//Á·Ï°13.5:
//#include<string>
//#include<iostream>
//class HasPtr {
//public:
//	HasPtr(const std::string& s = std::string()):ps(new std::string(s)), i(0) {};
//	HasPtr(const HasPtr& s) {
//		ps = new std::string(*s.ps);
//		i = s.i;
//	}
//public:
//	std::string* ps;
//	int i;
//};
//
//int main()
//{
//	HasPtr h1;
//	HasPtr h2 = h1;
//	std::cout << h1.ps << std::endl;
//	std::cout << h2.ps;
//}