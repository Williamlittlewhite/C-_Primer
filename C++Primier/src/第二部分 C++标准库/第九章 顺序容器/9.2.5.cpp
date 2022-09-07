//Á·Ï°9.14£º
#include<list>
#include<vector>
#include<string>
#include<iostream>
int main()
{
	char a[] = "rng", b[] = "edg", c[] = "fpx";
	std::list<char*> table{a,b,c};
	std::vector<std::string> v;
	v.assign(table.cbegin(), table.cend());
	for (auto i : v)
		std::cout << i << " ";
	return 0;
}