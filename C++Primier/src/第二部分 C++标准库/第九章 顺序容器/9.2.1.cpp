//Á·Ï°9.4£º
//#include<vector>
//#include<iostream>
//bool myfunc(std::vector<int>::iterator it1, std::vector<int>::iterator it2, int value)
//{
//	for (auto i = it1; i != it2; i++)
//	{
//		if (*i == value)
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	std::vector<int> ilist = { 2,4,6,8,10,12 };
//
//	std::cout << myfunc(ilist.begin(), ilist.end(), 6) << std::endl;
//	std::cout << myfunc(ilist.begin(), ilist.end(), 5) << std::endl;
//}
//	
//}
//Á·Ï°9.5£º
//std::vector<int>::iterator myfunc(std::vector<int>::iterator it1,std::vector<int>::iterator it2, int value)
//{
//	for (;it1 != it2; ++it1)
//	{
//		if (*it1 == value)
//			return it1;
//	}
//	return it2;
//}
//
//int main()
//{
//	std::vector<int> ilist = { 2,4,6,8,10,12 };
//
//	std::cout << myfunc(ilist.begin(), ilist.end(), 6) - ilist.begin() <<std::endl;
//	std::cout << myfunc(ilist.begin(), ilist.end(), 5) - ilist.end() << std::endl;
//	
//}
