////Á·Ï°7.1£º
//#include<iostream>
//#include<string>
//class Sales_data
//{
//public:
//	std::string BookString;
//	double OnePrice;
//	int SaleNumber;
//	double TotalPrice = OnePrice * SaleNumber;
//	Sales_data(const std::string& s1, double s2, int s3) 
//		:BookString(s1), OnePrice(s2), SaleNumber(s3) {};
//	Sales_data() = default;
//	const std::string& isbn() {
//		return BookString;
//	}
//};
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
//				total.SaleNumber += trans.SaleNumber;
//			/*	std::cout << total.TotalPrice << std::endl;
//				std::cout << trans.TotalPrice << std::endl;*/
//				total.TotalPrice += trans.TotalPrice;
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
//
//
