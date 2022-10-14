#pragma once
#include<string>
#include<iostream>
class Quote {
public:
	Quote() = default;
	Quote(const std::string& s,double salesPrice):bookNo(s),price(salesPrice) {}
	const std::string& isbn() const { return bookNo; }
	virtual double net_price(std::size_t n)const { /*std::cout << price;*/return n * price; }
	virtual void debug()
	{
		std::cout << bookNo << " " << price << std::endl;
	}
	virtual Quote* clone()const& { return new Quote(*this); }
	virtual Quote* clone()&& { return new Quote(std::move(*this));}
	virtual ~Quote(){}
protected:
	double price = 0.0;
	std::string bookNo;
};
//Á·Ï°15.5
class BulkQuote :public Quote {
private:
	std::size_t min_qunty;
	double discount;
public:
	BulkQuote() = default;
	BulkQuote* clone()const& { return new BulkQuote(*this); }
	BulkQuote* clone()&&{ return new BulkQuote(*this); }
	BulkQuote(const std::string& s,double pr,std::size_t num,double dis):Quote(s,pr),min_qunty(num),discount(dis) {}
	double net_price(std::size_t n) const {
		if (n >= min_qunty)
			return n * (1 - discount) * price;
		else
			/*return min_qunty * (1 - discount) * price + (n - min_qunty) * price;*/
			return n * price;
	}
	void debug()
	{
		std::cout << bookNo << " " << price << " " << min_qunty << " "<<discount<<std::endl;
	}
};
//Á·Ï°15.7:
//class limitedQuote :public Quote {
//private:
//	std::size_t number;
//	double discount;
//public:
//	limitedQuote(const std::string& s, double pr, std::size_t n, double dis) :Quote(s, pr), number(n), discount(dis) {};
//	double net_price(std::size_t n)const {
//		if (n <= number)
//			return n * (1 - discount) * price;
//		else
//			return number * (1 - discount) * price + (n - number) * price;
//	}
//	void debug()
//	{
//		std::cout << bookNo << " " << price << " " << number<< " " << discount << std::endl;
//	}
//};
//Á·Ï°15.15:
class Disc_quote :public Quote
{
public:
	Disc_quote(const std::string& book = "", double salesprice = 0.0, std::size_t qty = 0, double disc = 0.0) :Quote(book, salesprice), quantity(qty), discount(disc) {};
	virtual double net_price(std::size_t cnt)const = 0;
protected:
	std::size_t quantity;
	double discount;
};

class Bulk_quote :public Disc_quote {
public:
	Bulk_quote(const std::string& book = "", double salesprice = 0.0, std::size_t qty = 0, double disc = 0.0) :Disc_quote(book, salesprice, qty, disc) {};
	double net_price(std::size_t cnt)const
	{
		if (cnt > quantity)
			return cnt * (1 - discount) * price;
		else
			return cnt * price;
	}
};
class limitedQuote :public Disc_quote {
public:
	limitedQuote(const std::string& s, double pr, std::size_t n, double dis) :Disc_quote(s,pr,n,dis) {};
	double net_price(std::size_t n)const {
		if (n <= quantity)
			return n * (1 - discount) * price;
		else
			return quantity * (1 - discount) * price + (n - quantity) * price;
	}
};