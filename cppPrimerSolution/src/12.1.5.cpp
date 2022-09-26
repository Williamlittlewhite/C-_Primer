//Á·Ï°12.16£º
#include<memory>
int main()
{
	std::unique_ptr<int> p(new int);
	auto q = p;
	return 0;
}