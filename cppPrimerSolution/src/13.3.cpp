//Á·Ï°13.30:
//#include<string>
//#include<iostream>
//class HasPtr
//{
//	friend void swap(HasPtr& lhs, HasPtr& rhs);
//public:
//	HasPtr():ps(new std::string("")), i(0){};
//	HasPtr(const std::string& s):ps(new std::string(s)),i(0){}
//	HasPtr(const HasPtr& temp) { ps = new std::string(*temp.ps); i = temp.i; };
//	
//public:
//	std::string* ps;
//	int i;
//};
//void swap(HasPtr& lhs, HasPtr& rhs) {
//	using std::swap;
//	swap(lhs.ps, rhs.ps);
//	swap(lhs.i, rhs.i);
//}
//int main()
//{
//	HasPtr h("hi mom!");
//	HasPtr h2(h);
//	HasPtr h3("william");
//	swap(h2, h3);
//	std::cout << *h2.ps << std::endl;
//	std::cout << *h3.ps << std::endl;
//	return 0;
//}

//Á·Ï°13.31£º
//#include<string>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//class HasPtr
//{
//	friend void swap(HasPtr& lhs, HasPtr& rhs);
//public:
//	HasPtr():ps(new std::string("")), i(0){};
//	HasPtr(const std::string& s):ps(new std::string(s)),i(0){}
//	HasPtr(const HasPtr& temp) { ps = new std::string(*temp.ps); i = temp.i; };
//	bool operator<(const HasPtr& temp)const { return *ps < *temp.ps; }
//	~HasPtr() { delete ps; }
//public:
//	std::string* ps;
//	int i;
//};
//void swap(HasPtr& lhs, HasPtr& rhs) {
//	using std::swap;
//	std::cout << "½»»»" << *lhs.ps << "ºÍ" << *rhs.ps << std::endl;
//	swap(lhs.ps, rhs.ps);
//	swap(lhs.i, rhs.i);
//}
//
//int main(int argc,char** argv)
//{
//	std::vector<HasPtr> vh;
//	int n = atoi(argv[1]);
//	for (int i = 0; i < n; i++)
//		vh.push_back(std::to_string(n - i));
//	for (auto p : vh)
//		std::cout << *p.ps << " ";
//	std::cout << std::endl;
//	std::sort(vh.begin(), vh.end());
//	for (auto p : vh)
//		std::cout << *p.ps << " ";
//	std::cout << std::endl;
//	return 0;
//}