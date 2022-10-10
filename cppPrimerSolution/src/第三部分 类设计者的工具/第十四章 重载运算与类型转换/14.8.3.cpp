//Á·Ï°14.44:
#include<iostream>
#include<unordered_map>
#include<functional>
#include<string>
std::unordered_map<std::string, std::function<int(int, int)>> binOps = {
	{"+",std::plus<int>()},
	{"-",std::minus<int>()},
	{"*",std::multiplies<int>()},
	{"/",std::divides<int>()},
	{"/",std::modulus<int>()}
};
int main()
{
	int l, r;
	std::string op;
	std::cin >> l >> op >> r;
	std::cout << binOps[op](l, r) << std::endl;
	return 0;
}
