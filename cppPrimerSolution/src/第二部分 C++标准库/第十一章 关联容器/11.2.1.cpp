//练习11.7：
//#include<map>
//#include<string>
//#include<vector>
//#include<iostream>
//int main()
//{
//	std::map<std::string, std::vector<std::string>> m;
//	m.insert({ "bai",{"baizexin","baiqingyu"} });
//	m.insert({ "han",{"hanrunhua","hanbaojun"} });
//	m.insert({ "wang",{"wangjian","wangyun"} });
//	for (auto i : m["bai"])
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : m["han"])
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : m["wang"])
//		std::cout << i << " ";
//	return 0;
//}

//11.8 set是红黑树实现的 对数查找
//#include<vector>
//#include<string>
//#include<iostream>
//#include<algorithm>
//int main()
//{
//	std::vector<std::string> v;
//	std::string temp;
//	while (std::cin >> temp)
//	{
//		if (std::find(v.begin(), v.end(), temp) == v.end())
//			v.push_back(temp);
//	}
//	for (auto i : v)
//		std::cout << i << " ";
//	return 0;
//}