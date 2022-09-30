//Á·Ï°7.41£º
//#include<string>
//#include<iostream>
//class Sales_data {
//public:
//	std::string bookNo;
//	unsigned units_sold = 0;
//	double sellingprice = 0.0;
//	double saleprice = 0.0;
//	double discount = 0.0;
//	Sales_data(const std::string& bookno, const unsigned sold, const double sellprice, const double saleprice)
//		:bookNo(bookno), units_sold(sold), sellingprice(sellprice), saleprice(saleprice)
//	{
//		if (sellingprice != 0)
//			discount = saleprice / sellprice;
//	}
//	Sales_data() :Sales_data("",0,0.0,0.0) {};
//	Sales_data(const std::string& bookno) :Sales_data(bookno,0,0.0,0.0) {};
//	/*Sales_data(const std::string& bookno):bookNo(bookno) {}*/
//	
//	/*Sales_data(std::istream& is);*/
//	Sales_data(std::istream& is)
//	{
//		is >> bookNo >> units_sold >> sellingprice >> saleprice;
//		if (sellingprice != 0)
//			discount = saleprice / sellingprice;
//	}
//};


//
//int main()
//{
//	Sales_data data1;
//	Sales_data data2("william");
//	Sales_data data3("william", 10, 5.0, 4.5);
//	Sales_data data4(std::cin);
//	std::cout << data1.bookNo << "\t" << data1.units_sold << "\t" << data1.sellingprice << "\t" << data1.saleprice << "\t" << data1.discount << std::endl;
//	std::cout << data2.bookNo << "\t" << data2.units_sold << "\t" << data2.sellingprice << "\t" << data2.saleprice << "\t" << data2.discount << std::endl;
//	std::cout << data3.bookNo << "\t" << data3.units_sold << "\t" << data3.sellingprice << "\t" << data3.saleprice << "\t" << data3.discount << std::endl;
//	std::cout << data4.bookNo << "\t" << data4.units_sold << "\t" << data4.sellingprice << "\t" << data4.saleprice << "\t" << data4.discount << std::endl;
//	return 0;
//}

//Á·Ï°7.40&&7.42£º
//#include<string>
//#include<iostream>
//class Tree
//{
//public:
//	std::string name;
//	unsigned int age;
//	double height;
//public:
//	Tree(const std::string& ne, const int& ag, const double& he) :name(ne), age(ag), height(he) {}
//	Tree():Tree("",0,0.0) {}
//	Tree(const std::string& ne): Tree(ne,0,0.0){}
//};
//
//int main()
//{
//		
//	Tree data2("william");
//	Tree data3("william", 10, 5.0);
//	Tree data4;
//	std::cout << data2.name << "\t" << data2.age << "\t" << data2.height<< "\t"  << std::endl;
//	std::cout << data3.name << "\t" << data3.age << "\t" << data3.height<< "\t"  << std::endl;
//	std::cout << data4.name << "\t" << data4.age << "\t" << data4.height<< "\t"  << std::endl;
//	return 0;
//}