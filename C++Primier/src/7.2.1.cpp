//Á·Ï°7.21£º
#include<iostream>
#include<string>
class Sales_data
{
	friend Sales_data add(const Sales_data& item1, const Sales_data& item2);
	friend std::ostream& print(std::ostream& os, Sales_data& item);
	friend std::istream& read(std::istream& is, Sales_data& item);
private:
	std::string BookString;
	double OnePrice;
	int SaleNumber;
	double TotalPrice = OnePrice * SaleNumber;
	Sales_data& combine(const Sales_data& rhs);
	
public:
	Sales_data(const std::string& s1, double s2, int s3) 
		:BookString(s1), OnePrice(s2), SaleNumber(s3) {};
	Sales_data() = default;
	const std::string& isbn() {
		return BookString;
	}
	
};

inline Sales_data& Sales_data::combine(const Sales_data& rhs) {
	SaleNumber += rhs.SaleNumber;
	TotalPrice += rhs.TotalPrice;
	return *this;
}
std::istream& read(std::istream& is, Sales_data& item)
{
	is >> item.BookString >> item.SaleNumber >> item.OnePrice;
	item.TotalPrice = item.OnePrice * item.SaleNumber;
	return is;
}
std::ostream& print(std::ostream& os, Sales_data& item)
{
	os << item.BookString << "\t" << item.SaleNumber << "\t" << item.TotalPrice << "\t" << 
	item.TotalPrice/item.SaleNumber	<< std::endl;
	return os;
}
Sales_data add(const Sales_data& item1, const Sales_data& item2) {
	Sales_data temp = item1;
	temp = temp.combine(item2);
	return temp;
}

int main()
{
	Sales_data total, trans;
	if (read(std::cin,total))
	{
		while (read(std::cin,trans))
		{
			if (trans.isbn() == total.isbn())
			{
				total = add(total, trans);
				total.OnePrice = total.TotalPrice / total.SaleNumber;
			}
			else {
				print(std::cout, total);
				total.OnePrice = trans.OnePrice;
				total.SaleNumber = trans.SaleNumber;
				total.BookString = trans.BookString;
				total.TotalPrice = trans.TotalPrice;
			}
		}
		print(std::cout, total);
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}