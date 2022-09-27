//Á·Ï°13.2:
//#include<string>
//#include<iostream>
//class HasPtr {
//public:
//	HasPtr(const std::string& s = std::string()):ps(new std::string(s)),i(0){}
//	HasPtr(const HasPtr& temp):ps(new std::string(*temp.ps)),i(temp.i) {}
//	HasPtr& operator=(const HasPtr& temp) {
//		auto t = new std::string(*temp.ps);
//		delete ps;
//		ps = t;
//		i = temp.i;
//		return *this;
//	}
//	void print() { std::cout << *ps << std::endl; }
//private:
//	std::string* ps;
//	int i;
//};
//
//int main()
//{
//	HasPtr h("hi mom!");
//	HasPtr h2(h);
//	HasPtr h3 = h;
//	h.print();
//	h2.print();
//	h3.print();
//	return 0;
//}