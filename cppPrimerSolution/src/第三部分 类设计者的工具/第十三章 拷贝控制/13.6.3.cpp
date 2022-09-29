//练习13.55：
//#include<iostream>
//#include<vector>
//#include<string>
//#include<memory>
//class StrBlob {
//public:
//	StrBlob();
//	StrBlob(const StrBlob& s) {
//		data = std::make_shared<std::vector<std::string>>(*s.data);
//	}
//	StrBlob& operator=(const StrBlob& temp) {
//		data = std::make_shared<std::vector<std::string>>(*temp.data);
//		return *this;
//	}
//	void push_back(std::string&& s)
//	{
//		data->push_back(std::move(s));
//	}
//private:
//	std::shared_ptr<std::vector<std::string>> data;
//
//};
//
////练习13.58
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Foo {
//public:
//	Foo sorted()&&;
//	Foo sorted() const&;
//	void show()
//	{
//		for (auto i : data)
//			std::cout << i << " ";
//	}
//private:
//	vector<int> data={0,6,4,8};
//};
//Foo Foo::sorted()&&
//{
//	std::cout << "右值引用" << std::endl;
//	sort(data.begin(), data.end());
//	return *this;
//}
//Foo Foo::sorted()const&
//{
//	std::cout << "左值引用" << std::endl;
//	//Foo ret(*this);
//	//return ret.sorted();错误的
//	return Foo(*this).sorted();
//}
//
//int main()
//{
//	Foo f;
//	f = f.sorted();
//	f.show();
//	return 0;
//}


