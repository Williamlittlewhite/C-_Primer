//Á·Ï°15.26&&15.27:
#include<iostream>
#include<string>
#include<ostream>
class Quote
{
public:
	Quote() = default;
	Quote(const std::string& book="",double sales_price=0.0):
		bookNo(book),price(sales_price){
		std::cout << "Quote Constructor is running" << std::endl;
	}
	std::string isbn()const { return bookNo; }
	virtual double net_price(std::size_t n)const { return n * price; }
	virtual ~Quote() { std::cout << "Quote destructor is running" << std::endl; }
	friend std::ostream& operator<< (std::ostream&, Quote&);
private:
	std::string bookNo;
protected:
	double price = 0.0;
};
std::ostream& operator<<(std::ostream& os, Quote& q) {
	os << "Using operator <<(ostream&,Quote &);" << std::endl;
	return os;
};

class Bulk_quote :public Quote
{
public:
	using Quote::Quote;
	Bulk_quote(const std::string& book = "", double sales_price = 0.0, std::size_t qty = 0, double disc = 0.0) :
		Quote(book, sales_price), min_qty(qty), discount(disc)
	{
		std::cout << "Bulk_Constructor is running" << std::endl;
	}
	double net_price(std::size_t cnt)const
	{
		if (cnt > min_qty)
			return cnt * (1 - discount) * price;
		else
			return cnt * price;
	}
	~Bulk_quote() { std::cout << "Bulk_Destructor is running" << std::endl; }
private:
	std::size_t min_qty;
	double discount;
};
std::ostream& operator<<(std::ostream& os, Bulk_quote& bq)
{
	os << "Using operator <<(ostream&,Bulk_quote &)" << std::endl;
	return os;
}

int main(int argc, const char** argv)
{
	Quote base("C++ Primer", 128.0);
	Bulk_quote bulk("Core Python Programming", 89, 5, 0.19);
	std::cout << base << std::endl;
	std::cout << bulk << std::endl;
	return 0;
}