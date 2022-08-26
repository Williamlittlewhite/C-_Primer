//练习1.23、1.24:文件重定向测试 1.5.2 < book_sales
#include"Sales_item.h"
#include<unordered_map>
int main()
{
	std::unordered_map<std::string, int> m;
	Sales_item book;
	while (std::cin>>book)
	{
		m[book.isbn()] += 1;
	}
	for(auto t:m)
		std::cout << t.first <<"共有" <<t.second << "条销售记录" << std::endl;
}