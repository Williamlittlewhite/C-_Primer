//��ϰ7.6&&7.7��
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
//inline Sales_data& Sales_data::combine(const Sales_data& rhs) {
//	SaleNumber += rhs.SaleNumber;
//	TotalPrice += rhs.TotalPrice;
//	return *this;
//}
//std::istream& read(std::istream& is, Sales_data& item)
//{
//	is >> item.BookString >> item.SaleNumber >> item.OnePrice;
//	item.TotalPrice = item.OnePrice * item.SaleNumber;
//	return is;
//}
//std::ostream& print(std::ostream& os, Sales_data& item)
//{
//	os << item.BookString << "\t" << item.SaleNumber << "\t" << item.TotalPrice << "\t" << 
//	item.TotalPrice/item.SaleNumber	<< std::endl;
//	return os;
//}
//Sales_data add(const Sales_data& item1, const Sales_data& item2) {
//	Sales_data temp = item1;
//	temp = temp.combine(item2);
//	return temp;
//}
//
//
//
//int main()
//{
//	Sales_data total, trans;
//	if (read(std::cin,total))
//	{
//		while (read(std::cin,trans))
//		{
//			if (trans.isbn() == total.isbn())
//			{
//				total = add(total, trans);
//				total.OnePrice = total.TotalPrice / total.SaleNumber;
//			}
//			else {
//				print(std::cout, total);
//				total.OnePrice = trans.OnePrice;
//				total.SaleNumber = trans.SaleNumber;
//				total.BookString = trans.BookString;
//				total.TotalPrice = trans.TotalPrice;
//			}
//		}
//		print(std::cout, total);
//	}
//	else {
//		std::cerr << "No data?!" << std::endl;
//		return -1;
//	}
//	return 0;
//}

//��ϰ7.9��
//#include<string>
//#include<iostream>
//class Person {
//private:
//	std::string name;
//	std::string adress;
//public:
//	std::string GetName() const { return name; }
//	std::string GetAdress() const { return adress; }
//	friend std::istream& read(std::istream& is, Person& per);
//};
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
//	Person p1, p2;
//	read(std::cin, p1);
//	read(std::cin, p2);
//	print(std::cout, p1);
//	print(std::cout, p2);
//}