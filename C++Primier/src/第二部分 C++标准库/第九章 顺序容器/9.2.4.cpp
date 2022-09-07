//Á·Ï°9.11£º
//#include<vector>
//#include<iostream>
//int main()
//{
//	std::vector<int> v1 = { 1,2,3,4,5,6,7,8 };
//	std::vector<int> v2{2,5,7,9,11};
//	std::vector<int> v3(v1);
//	std::vector<int> v4 = v2;
//	std::vector<int> v5(v1.begin()+2,v1.end()-2);
//	std::vector<int> v6(5);
//	std::vector<int> v7(5,4);
//
//	for (auto i : v1)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : v2)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : v3)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : v4)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : v5)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : v6)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : v7)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	return 0;
//}

//Á·Ï°9.13£º
//#include<vector>
//#include<list>
//#include<iostream>
//int main()
//{
//	std::list<int> l1{ 1,5,6,7,9 };
//	std::vector<int> v1{ 1,5,8,9,11 };
//	std::vector<double> v2(l1.begin(), l1.end());
//	std::vector<double> v3(v1.begin(), v1.end());
//
//	std::cout << v2.capacity() << " " << v2.size() << std::endl;
//	std::cout << v3.capacity() << " " << v3.size() << std::endl;
//	for (auto i : v2)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : v3)
//		std::cout << i << " ";
//	std::cout << std::endl;
//
//	return 0;
//}

