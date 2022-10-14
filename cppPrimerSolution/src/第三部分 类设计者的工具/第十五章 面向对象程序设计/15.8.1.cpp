//Á·Ï°15.8.1:
#include<set>
#include<memory>
#include<vector>
#include"Quote.h"
double print_total(std::ostream& os, const Quote& item, std::size_t n)
{
	std::cout << "\n"<<n<<"\n";
	double ret = item.net_price(n);
	//std::cout << ret;
	os << "ISBN: " << item.isbn() << " sold " << n << " fee: " << ret << std::endl;
	return ret;
}

class Basket
{
public:
	void add_item(Quote& sale)
	{
		items.insert(std::shared_ptr<Quote>(sale.clone()));
	}
	void add_item(Quote&& sale)
	{
		items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
	}
	double total_receipt(std::ostream&)const;
private:
	static bool compare(const std::shared_ptr<Quote>& lhs, const std::shared_ptr<Quote>& rhs)
	{
		return lhs->isbn() < rhs->isbn();
	}
	std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{ compare };
};
double Basket::total_receipt(std::ostream& os)const
{
	double sum = 0.0;
	for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter))
		sum += print_total(os, **iter, items.count(*iter));
	std::cout << "Total Sale: " << sum << std::endl;
	return sum;
}

int main()
{
	Basket bas;
	Quote q("wili", 50);
	BulkQuote bq("lili", 60, 4, 0.8);
	bas.add_item(q);
	bas.add_item(bq);
	bas.total_receipt(std::cout) ;
	//v.push_back(std::make_shared<Quote>(bq));
	//int res = 0;
	//for (auto i : v)
	//{
	//	std::cout << i->net_price(6) << std::endl;
	//	res += i->net_price(6);
	//}
	//std::cout << res;
}