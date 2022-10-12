//Á·Ï°15.28:
#include<vector>
#include<memory>
#include"Quote.h"
int main()
{
	std::vector<std::shared_ptr<Quote>> v;
	Quote q("wili", 50);
	BulkQuote bq("lili", 60, 4, 0.8);
	v.push_back(std::make_shared<Quote>(q));
	v.push_back(std::make_shared<BulkQuote>(bq));
	//v.push_back(std::make_shared<Quote>(bq));
	int res = 0;
	for (auto i : v)
	{
		std::cout << i->net_price(6)<<std::endl;
		res += i->net_price(6);
	}
	std::cout << res;
}	