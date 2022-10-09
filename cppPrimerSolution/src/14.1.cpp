////Á·Ï°14.2&&14.6&&14.9&&14.13&&14.20&&14.22£º
//#include<string>
//#include<iostream>
//class Sales_data
//{
//	friend std::ostream& operator<<(std::ostream& os, const Sales_data& item);
//	friend std::istream& operator>>(std::istream& is, Sales_data& item);
//	friend Sales_data operator+(const Sales_data& s1, const Sales_data& s2);
//	friend Sales_data operator-(const Sales_data& s1, const Sales_data& s2);
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
//	//Sales_data& operator+=(const Sales_data& s)
//	//{
//	//	units_sold += s.units_sold;
//	//	revenue += s.revenue;
//	//	return *this;
//	//}
//	Sales_data& operator+=(const Sales_data& s)
//	{
//		(*this) = (*this + s);
//		return *this;
//	}
//	Sales_data& operator-=(const Sales_data& s)
//	{
//		units_sold -= s.units_sold;
//		revenue -= s.revenue;
//		return *this;
//	}
//	Sales_data& operator=(const std::string& s)
//	{
//		bookNo = s;
//		return *this;
//	}
//	
//};
//std::ostream& operator<<(std::ostream& os, const Sales_data& item)
//{
//	os << item.bookNo << " " << item.units_sold << " " << item.revenue;
//	return os;
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
//Sales_data operator-(const Sales_data& s1, const Sales_data& s2)
//{
//	Sales_data lhs = s1;
//	lhs.revenue = s1.revenue - s2.revenue;
//	lhs.units_sold = s1.units_sold - s2.units_sold;
//	return lhs;
//}

////Á·Ï°14.5&&14.8&&14.12&&14.17&&14.19&&14.25:
//#include<iostream>
//#include<vector>
//#include<string>
//class Date
//{
//public:
//	Date() = default;
//	Date(int y, int m, int d) :year(y),month(m),day(d){ }
//	Date& operator=(const std::string& d)
//	{
//		std::string temp;
//		std::vector<std::string> v;
//		for (auto i : d)
//		{
//			if (i == '-')
//				v.push_back(temp),temp.clear();
//			else
//				temp += i;
//		}
//		v.push_back(temp);
//	/*	std::cout << v[0] << " " << v[1] << " " << v[2];*/
//		year = std::stoi(v[0]);
//		month = std::stoi(v[1]);
//		day = std::stoi(v[2]);
//		return *this;
//	}
//	friend std::ostream& operator<<(std::ostream&, const Date&);
//	friend std::istream& operator>>(std::istream&, Date&);
//	friend bool operator== (const Date&, const Date&);
//	friend bool operator!= (const Date&, const Date&);
//	friend bool operator<(const Date&, const Date&);
//	friend bool operator<=(const Date&, const Date&);
//	friend bool operator>(const Date&, const Date&);
//	friend bool operator>=(const Date&, const Date&);
//	void show()
//	{
//		std::cout << year << " " << month << " " << day;
//	}
//private:
//	int year, month, day;
//};
//bool operator== (const Date& d1, const Date& d2)
//{
//	return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
//}
//bool operator< (const Date& d1, const Date& d2)
//{
//	return (d1.year < d2.year) ||((d1.year==d2.year)&&(d1.month < d2.month)) || ((d1.year == d2.year && (d1.month==d2.month)&&(d1.day==d2.day)));
//}
//bool operator<=(const Date& d1, const Date& d2)
//{
//	return (d1 == d2) || (d1 < d2);
//}
//bool operator> (const Date& d1, const Date& d2)
//{
//	return (d1.year > d2.year) || ((d1.year == d2.year) && (d1.month > d2.month)) || ((d1.year == d2.year) && (d1.month == d2.month) && (d1.day > d2.day));
//}
//bool operator>= (const Date& d1, const Date& d2) {
//	return (d1 == d2) || (d1 > d2);
//}
//bool operator!= (const Date& d1, const Date& d2)
//{
//	return !(d1 == d2);
//}
//std::ostream& operator<<(std::ostream& os, const Date& date)
//{
//	os << date.year << " " << date.month << " "<< date.day;
//	return os;
//}
//std::istream& operator>>(std::istream& is, Date& date)
//{
//	is >> date.year >> date.month >> date.day;
//	if (!is)
//		date = Date(0, 0, 0);
//	return is;
//}
//int main()
//{
//	Date d1(1999, 6, 24);
//	d1 = "1999-6-15";
//	d1.show();
//	Date d2(2000, 5, 11);
//	Date d3(1998, 6, 24);
//	//if (d1 != d2)
//	//	std::cout << "false!" << std::endl;
//	//if (d1 == d3)
//	//	std::cout << "true!";
//	//if (d1 > d2)
//	//	std::cout << "d1>d2" << std::endl;
//	//else
//	//	std::cout << "d1<=d2" << std::endl;
//	//if (d2 > d3)
//	//	std::cout << "d2>d3" << std::endl;
//	//else
//	//	std::cout << "d2<=d3" << std::endl;
//}
