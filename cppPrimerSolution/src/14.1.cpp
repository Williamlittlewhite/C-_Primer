//Á·Ï°14.2&&14.6&&14.9£º
//#include<string>
//#include<iostream>
//class Sales_data
//{
//	friend std::ostream& operator<<(std::ostream& os, const Sales_data& item);
//	friend std::istream& operator>>(std::istream& is, Sales_data& item);
//	friend Sales_data operator+(const Sales_data& s1, const Sales_data& s2);
//private:
//	std::string bookNo;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//public:
//	Sales_data() = default;
//	Sales_data(const Sales_data& s)
//	{
//		bookNo = s.bookNo;
//		units_sold = s.units_sold;
//		revenue = s.revenue;
//	}
//	Sales_data& operator+=(const Sales_data& s)
//	{
//		units_sold += s.units_sold;
//		revenue += s.revenue;
//		return *this;
//	}
//	
//};
//std::ostream& operator<<(std::ostream& os, const Sales_data& item)
//{
//	os << item.bookNo << " " << item.units_sold << " " << item.revenue;
//}
//std::istream& operator>>(std::istream& is,Sales_data& item)
//{
//	double price;
//	is >> item.bookNo >> item.units_sold >> price;
//	if (is)
//		item.revenue = item.units_sold * price;
//	else
//		item = Sales_data();
//	return is;
//}
//Sales_data operator+(const Sales_data& s1, const Sales_data& s2)
//{
//	Sales_data lhs = s1;
//	lhs.revenue = s1.revenue + s2.revenue;
//	lhs.units_sold = s1.units_sold + s2.units_sold;
//	return lhs;
//}

//Á·Ï°14.5:
#include<iostream>
class Date
{
public:
	Date() = default;
	Date(int y, int m, int d) :year(y),month(m),day(d){ }
	friend std::ostream& operator<<(std::ostream&, const Date&);
private:
	int year, month, day;
};
std::ostream& operator<<(std::ostream& os, const Date& date)
{
	os << date.year << " " << date.month << " "<< date.day;
	return os;
}
