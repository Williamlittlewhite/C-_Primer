//Á·Ï°15.6:
#include"Quote.h"
#include<iostream>
double print_total(std::ostream& os, const Quote& item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " sold " << n << " fee: " << ret << std::endl;
	return ret;
}
//int main()
//{
//	Quote q("seiya", 50);
//	BulkQuote bq("seihua", 50, 4, 0.8);
//	print_total(std::cout, q, 5);
//	print_total(std::cout, bq, 8);
//}
//Á·Ï°15.7:
int main()
{
	Quote q("seiya", 50);
	limitedQuote lq("seihua", 50, 4, 0.8);
	print_total(std::cout, q, 5);
	print_total(std::cout, lq, 8);
}