//练习15.15&&15.16&&15.17:
#include"Quote.h"
#include<iostream>
double print_total(std::ostream& os, const Quote& item, std::size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " sold " << n << " fee: " << ret << std::endl;
	return ret;
}
int main()
{
	Bulk_quote bq("wli", 50, 4, 0.8);
	print_total(std::cout, bq, 6);
	limitedQuote lq("wil", 50, 4, 0.6);
	print_total(std::cout, lq, 6);
	//Disc_quote dq("wil", 50, 4, 0.6); //抽象基类不可以定义捏
}
