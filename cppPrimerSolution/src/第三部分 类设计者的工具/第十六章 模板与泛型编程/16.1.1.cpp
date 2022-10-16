//Á·Ï°16.2:
template<typename T>
int compare(const T& v1, const T& v2)
{
	if (v1 > v2)
		return 1;
	else if (v1 == v2)
		return 0;
	else
		return -1;
}
//Á·Ï°16.3:
//#include<string>
//#include<iostream>
//class Sales_data {
//private:
//	std::string bookNo;
//	int price;
//};
//int main()
//{
//	Sales_data s1, s2;
//	std::cout << compare(1, 2) << std::endl;
//	std::cout << compare(s1, s2) << std::endl;
//	return 0;
//}

//Á·Ï°16.4:
//#include<string>
//#include<list>
//#include<vector>
//#include<iostream>
//template<typename T,class U>
//bool myfind(T beg, T end,U x)
//{
//	for (auto i = beg; i != end; i++)
//		if (*i == x)
//			return true;
//	return false;
//}
//
//int main()
//{
//	std::list<std::string> l1{ "word","an","interaction","she" };
//	if (myfind(l1.begin(), l1.end(), "an"))
//		std::cout << "true!" << std::endl;
//	std::vector<int> v1{5,8,4,6 };
//	if (myfind(v1.begin(), v1.end(), 5))
//		std::cout << "true!" << std::endl;
//}

//Á·Ï°16.5:
//#include<iostream>
//int a[6] = { 0,2,4,6,8,10 };
//std::string vs[3] = { "Hello","World","!" };
//template<typename T,unsigned N>
//void print(T(&arr)[N])
//{
//	for (auto i : arr)
//		std::cout << i << std::endl;
//}
//int main()
//{
//	print(a);
//	print(vs);
//}

//Á·Ï°16.6:
//#include<iostream>
//int a[6] = { 0,2,4,6,8,10 };
//std::string vs[3] = { "Hello","World","!" };
//template<typename T,unsigned N>
//void print(T(&arr)[N])
//{
//	for (auto i : arr)
//		std::cout << i << std::endl;
//}
//
//template<typename T, unsigned N>
//const T* mybegin(const T(&a)[N])
//{
//	return &a[0];
//}
//template<typename T, unsigned N>
//const T* myend(const T(&a)[N])
//{
//	return &a[0]+N;
//}
//
//int main()
//{
//	//print(a);
//	std::cout << *mybegin(a) << std::endl;
//	std::cout << *(myend(a)-1) << std::endl;
//	//print(vs);
//	std::cout << *mybegin(vs) << std::endl;
//	std::cout << *(myend(vs)-1) << std::endl;
//}

//Á·Ï°16.7:
//#include<iostream>
//template<typename T,std::size_t N>
//constexpr int size(const T (& a)[N])
//{
//	return N;
//}
//int main()
//{
//	int b[5] = { 2,4,6,8,10 };
//	const char c[4] = "abc";
//	std::cout << size(c);
//}