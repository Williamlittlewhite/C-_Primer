//练习10.43：
//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<int> v{ 1,4,6,8,9,4 };
//	for (auto i = v.rbegin(); i != v.rend(); ++i)
//		std::cout << *i << " ";
//}
//练习10.35：
//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<int> v{ 1,4,6,8,9,4 };
//	for (auto i = v.end(); i != v.begin();)
//	{
//		--i;
//		std::cout << *i << " ";
//	}
//}

//练习10.36：反向迭代器扩展算法能力
//#include<algorithm>
//#include<list>
//#include<iostream>
//int main()
//{
//	std::list<int> l{ 1,0,5,6,0,4,0,3 };
//	auto i = std::find(l.crbegin(), l.crend(), 0);
//	std::cout << *i << " ";
//	++i;
//	std::cout << *i;
//	return 0;
//}

//10.37：学会逆迭代器使用
//#include<vector>
//#include<algorithm>
//#include<iostream>
//#include<list>
//int main()
//{
//	std::vector<int> v{ 0,1,2,3,4,5,6,7,8,9 };
//	std::list<int> res;
//	for (int i = 7; i >= 3; --i)
//		res.push_back(v[i]);
//	for (auto j : res)
//		std::cout << j << " ";
//}