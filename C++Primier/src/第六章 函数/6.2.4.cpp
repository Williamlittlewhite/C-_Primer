//Á·Ï°6.21£º
//#include<iostream>
//int cmp(int a, int* b)
//{
//	int res = (a > (*b)) ? a:(*b);
//	return res;
//}
//int main()
//{
//	int a, b;
//	while (std::cin >> a >> b)
//		std::cout << cmp(a, &b)<<std::endl;
//}
//Á·Ï°6.22
//#include<iostream>
//void Swap(int* &a, int* &b)
//{
//	int* temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a, b;
//	while (std::cin >> a >> b)
//	{
//		int* p1 = &a, * p2 = &b;
//		std::cout << *p1 << *p2 << std::endl;
//		Swap(p1, p2);
//		std::cout << *p1 << *p2 << std::endl;
//	}
//}

//Á·Ï°6.23
//#include<iostream>
//void print(const int& i, const int* j)
//{
//	std::cout << i << std::endl;
//	for (int i = 0; i < 2; i++)
//		std::cout << j[i] << " ";
//}
//int main()
//{
//	int i = 0, j[2] = { 0,1 };
//	print(i, j);
//	return 0;
//}

