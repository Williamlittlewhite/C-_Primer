//练习7.2：//定义在类内部函数是内联函数
//#include<iostream>
//#include<string>
//class Sales_data
//{
//public:
//	std::string BookString;
//	double OnePrice;
//	int SaleNumber;
//	double TotalPrice = OnePrice * SaleNumber;
//	const std::string& isbn() {
//		return BookString;
//	}
//	Sales_data(const std::string& s1, double s2, int s3) 
//		:BookString(s1), OnePrice(s2), SaleNumber(s3) {};
//	Sales_data() = default;
//	Sales_data& combine(const Sales_data& rhs);
//};
//
////练习7.3：
//inline Sales_data& Sales_data::combine(const Sales_data& rhs) {
//	SaleNumber += rhs.SaleNumber;
//	TotalPrice += rhs.TotalPrice;
//	return *this;
//}
//
//int main()
//{
//	std::string s1,s2;
//	double t1,t2;
//	int u1,u2;
//	if (std::cin >> s1 >> u1 >> t1)
//	{
//		Sales_data total(s1, t1, u1);
//		while (std::cin >> s2 >> u2 >> t2)
//		{
//			Sales_data  trans(s2, t2, u2);
//			if (trans.isbn() == total.isbn())
//			{
//				total.combine(trans);
//				total.OnePrice = total.TotalPrice / total.SaleNumber;
//			}
//			else {
//				std::cout << total.isbn() <<"\t" << total.OnePrice<< "\t" << total.SaleNumber << std::endl;
//				total.OnePrice = trans.OnePrice;
//				total.SaleNumber = trans.SaleNumber;
//				total.BookString = trans.BookString;
//				total.TotalPrice = trans.TotalPrice;
//			}
//		}
//		std::cout << total.isbn() << "\t" << total.OnePrice << "\t" << total.SaleNumber << std::endl;
//	}
//	else {
//		std::cerr << "No data?!" << std::endl;
//		return -1;
//	}
//	return 0;
//}

//练习7.4
//#include<string>
//class Person {
//private:
//	std::string name;
//	std::string adress;
//public:
//	const std::string& GetName() const { return name; }
//	const std::string& GetAdress() const { return adress; }
//};
