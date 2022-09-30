//#include<string>
//#include<iostream>
//class Sales_data {
//public:
//	std::string bookNo;
//	unsigned units_sold = 0;
//	double sellingprice = 0.0;
//	double saleprice = 0.0;
//	double discount = 0.0;
//
//	Sales_data() = default;
//	Sales_data(const std::string& bookno);
//	/*Sales_data(const std::string& bookno):bookNo(bookno) {}*/
//	Sales_data(const std::string& bookno, const unsigned sold, const double sellprice, const double saleprice)
//		:bookNo(bookno), units_sold(sold), sellingprice(sellprice), saleprice(saleprice)
//	{
//		if (sellingprice != 0)
//			discount = saleprice / sellprice;
//	}
//	/*Sales_data(std::istream& is);*/
//	Sales_data(std::istream& is)
//	{
//		is >> bookNo >> units_sold >> sellingprice >> saleprice;
//		if (sellingprice != 0)
//			discount = saleprice / sellingprice;
//	}
//};
//inline Sales_data::Sales_data(std::istream& is)
//{
//	is >> bookNo >> units_sold >> sellingprice >> saleprice;
//	if (sellingprice != 0)
//		discount = saleprice / sellingprice;
//}
//Á·Ï°7.11&&7.12£º
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

//Á·Ï°7.13£º
//int main()
//{
//	Sales_data total(std::cin);
//	if (std::cin)
//	{
//		while (std::cin)
//		{
//			Sales_data trans(std::cin);
//			if (total.bookNo == trans.bookNo)
//			{
//				total.units_sold += trans.units_sold;
//			}
//			else
//			{
//				std::cout << total.bookNo << "\t" << total.units_sold << std::endl;
//				total.bookNo = trans.bookNo;
//				total.units_sold = trans.units_sold;
//			}
//		}
//		std::cout << total.bookNo << "\t" << total.units_sold << std::endl;
//	}
//	else
//	{
//		std::cerr << "No data?!" << std::endl;
//	}
//	return 0;
//}

//Á·Ï°7.14£º
//Sales_data::Sales_data(const std::string& bookno)
//	:bookNo(bookno),units_sold(0),sellingprice(0.0),saleprice(0.0),discount(0.0)
//{}

//Á·Ï°7.15
//#include<string>
//#include<iostream>
//class Person {
//private:
//	std::string name;
//	std::string adress;
//public:
//	Person() = default;
//	Person(const std::string& name, const std::string& adress):name(name),adress(adress){};
//	Person(std::istream& is) {
//		is >> name >> adress;
//	};
//	std::string GetName() const { return name; }
//	std::string GetAdress() const { return adress; }
//	friend std::istream& read(std::istream& is, Person& per);
//};
//
//
//inline std::istream& read(std::istream& is, Person& per)
//{
//	is >> per.name >> per.adress;
//	return is;
//}
//inline std::ostream& print(std::ostream& os, const Person& per)
//{
//	os << per.GetName() << "\t" << per.GetAdress() << std::endl;
//	return os;
//}
//
//int main()
//{
//	Person p1("william","CQU"), p2(std::cin);
//	print(std::cout, p1);
//	print(std::cout, p2);
//}