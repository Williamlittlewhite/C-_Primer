//Á·Ï°2.39£º
//struct Foo {}
//int main()
//{
//	return 0;
//}

//Á·Ï°2.40£º
#include<string>
#include<iostream>
struct Sales_item
{
	std::string isbn;
	int unitsSold = 0;
	double price = 0.0;
	double revenue = 0.0;
};

//Á·Ï°2.41£º

int main()
{
	Sales_item s1, s2;
	if(std::cin >> s1.isbn)
	{
		std::cin >> s1.unitsSold >> s1.price;
		s1.revenue = s1.price * s1.unitsSold;
		while (std::cin >> s2.isbn >> s2.unitsSold >> s2.price )
		{
			if (s1.isbn == s2.isbn)
			{
				s2.revenue = s2.price * s2.unitsSold;
				s1.unitsSold = s1.unitsSold + s2.unitsSold;
				s1.revenue = s1.revenue + s2.revenue;
			}
			else {
				std::cout << s1.isbn << " " << s1.unitsSold << " " << s1.revenue << " " << s1.revenue / s1.unitsSold << std::endl;
				s1.isbn = s2.isbn;
				s1.unitsSold = s2.unitsSold;
				s1.price = s2.price;
				s1.revenue = s1.price * s1.unitsSold;
			}
		}
		std::cout << s1.isbn << " " << s1.unitsSold << " " << s1.revenue << " " << s1.revenue/s1.unitsSold << std::endl;
		
	}
}
