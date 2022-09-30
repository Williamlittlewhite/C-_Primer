//练习3.1：
//#include<iostream>
//using std::endl;
//using std::cin;
//using std::swap;
//using std::cout;
//int main()
//{
//	int i = 50,sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//	cout << sum << endl;
//
//	for (int i = 10; i >= 0; i--)
//		cout << i << " ";
//
//	int a, b;
//	cout << endl;
//	cout << "请输入两个整数:";
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (int i = a; i <= b; i++)
//		cout << i << " ";
//}


//#include<string>
//#include<iostream>
//using std::string;
//using std::cin;
//using std::cout;
//using std::endl;
//struct Sales_item
//{
//	string isbn;
//	int unitsSold = 0;
//	double price = 0.0;
//	double revenue = 0.0;
//};
//
//int main()
//{
//	Sales_item s1, s2;
//	if (cin >> s1.isbn)
//	{
//		cin >> s1.unitsSold >> s1.price;
//		s1.revenue = s1.price * s1.unitsSold;
//		while (cin >> s2.isbn >> s2.unitsSold >> s2.price)
//		{
//			if (s1.isbn == s2.isbn)
//			{
//				s2.revenue = s2.price * s2.unitsSold;
//				s1.unitsSold = s1.unitsSold + s2.unitsSold;
//				s1.revenue = s1.revenue + s2.revenue;
//			}
//			else {
//				cout << s1.isbn << " " << s1.unitsSold << " " << s1.revenue << " " << s1.revenue / s1.unitsSold << endl;
//				s1.isbn = s2.isbn;
//				s1.unitsSold = s2.unitsSold;
//				s1.price = s2.price;
//				s1.revenue = s1.price * s1.unitsSold;
//			}
//		}
//		cout << s1.isbn << " " << s1.unitsSold << " " << s1.revenue << " " << s1.revenue / s1.unitsSold << endl;
//
//	}
//}
