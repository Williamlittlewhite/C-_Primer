////练习13.11:
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
//	~HasPtr() {
//		delete ps;
//		std::cout << "已经销毁了" << std::endl;
//	}
//};
//
//int main()
//{
//	{
//		HasPtr h1;
//		HasPtr h2;
//	}
//	
//}

//练习13.13:
//#include<iostream>
//#include<vector>
//struct X
//{
//	X() { std::cout << "X()" << std::endl; }
//	X(const X&) { std::cout << "X(const X&)" << std::endl; }
//};
//void a(X& x){}
//void b(X x){}
//int main()
//{
//	//X x;
//	//a(x);
//	//b(x);	
//	auto *temp = new X();
//	/*std::vector<X> v;
//	v.push_back(x);*/
//	return 0;
//}