//Á·Ï°7.21£º
//#include<iostream>
//#include<string>
//class Sales_data
//{
//	friend Sales_data add(const Sales_data& item1, const Sales_data& item2);
//	friend std::ostream& print(std::ostream& os, Sales_data& item);
//	friend std::istream& read(std::istream& is, Sales_data& item);
//private:
//	std::string BookString;
//	double OnePrice;
//	int SaleNumber;
//	double TotalPrice = OnePrice * SaleNumber;
//	Sales_data& combine(const Sales_data& rhs);
//	
//public:
//	Sales_data(const std::string& s1, double s2, int s3) 
//		:BookString(s1), OnePrice(s2), SaleNumber(s3) {};
//	Sales_data() = default;
//	const std::string& isbn() {
//		return BookString;
//	}
//	Sales_data& operator= (const Sales_data& trans) {
//		OnePrice = trans.OnePrice;
//		SaleNumber = trans.SaleNumber;
//		BookString = trans.BookString;
//		TotalPrice = trans.TotalPrice;
//		return *this;
//	}
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
//	temp.OnePrice = temp.TotalPrice / temp.SaleNumber;
//	return temp;
//}
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
//			}
//			else {
//				print(std::cout, total);
//				total = trans;
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

//Á·Ï°7.22
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