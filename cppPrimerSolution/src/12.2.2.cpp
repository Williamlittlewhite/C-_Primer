//Á·Ï°12.26:
//#include<memory>
//#include<iostream>
//int main()
//{
//	int n;
//	std::cin >> n;
//	std::allocator<std::string> alloc;
//	auto const p = alloc.allocate(n);
//	auto q = p;
//	while (n--)
//		alloc.construct(q++,"");
//	std::string s;
//	std::string* t = p;
//	while (std::cin >> s && t != p + n)
//		*t++ = s;
//	const size_t size = t - p;
//	std::cout << size << std::endl;
//	delete[] p;
//	return 0;
//}