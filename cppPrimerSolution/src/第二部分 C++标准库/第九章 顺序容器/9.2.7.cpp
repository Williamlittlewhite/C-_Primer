//练习9.15：
//#include<vector>
//#include<iostream>
//int main()
//{
//	std::vector<int> v{ 1,4,7,9,6,5 };
//	std::vector<int> v1(v);
//	std::vector<int> v2(6,0);
//
//	std::cout << (v == v1) << std::endl;
//	std::cout << (v == v2) << std::endl;
//}

//练习9.16：关系运算符要求容器类型相容且元素相同
//#include<list>
//#include<vector>
//#include<iostream>
//bool operator== (std::list<int> temp1, std::vector<int> temp2)
//{
//
//	if (temp1.size() != temp2.size())
//		return false;
//	auto lb = temp1.cbegin();
//	auto le = temp1.cend();
//	auto vb = temp2.cbegin();
//	for (; lb != le; ++lb, ++vb)
//		if (*lb != *vb)
//			return false;
//	return true;
//}
//int main()
//{
//	std::list<int> l1{ 1,4,5,7,9 };
//	std::vector<int> v1(l1.cbegin(), l1.cend());
//	std::list<int> l2(5, 5);
//	
//	std::cout << (l2 == v1) << std::endl;
//	std::cout << (l1 == v1) << std::endl;
//}