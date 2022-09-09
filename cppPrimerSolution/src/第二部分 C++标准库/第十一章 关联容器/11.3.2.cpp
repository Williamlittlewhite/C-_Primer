//Á·Ï°11.20£º
//#include<map>
//#include<iostream>
//#include<fstream>
//#include<string>
//int main()
//{
//	std::map<std::string, int> m;
//	std::fstream ifs("word_count");
//	std::string temp;
//	while (ifs >> temp)
//	{
//		if (m.find(temp) == m.end())
//		{
//			m.insert(std::make_pair(temp, 1));
//		}
//		else
//		{
//			auto t = m.find(temp);
//			(*t).second++;
//		}
//	}
//
//	for (auto it : m)
//		std::cout << it.first << " " << it.second << std::endl;
//}
//Á·Ï°11.23£º
//#include<map>
//#include<string>
//#include<vector>
//#include<iostream>
//int main()
//{
//	std::multimap<std::string, std::vector<std::string>> m;
//	m.insert({ "bai",{"baizexin","baiqingyu"} });
//	m.insert({ "bai",{"hanrunhua","hanbaojun"} });
//	m.insert({ "wang",{"wangjian","wangyun"} });
//	for (auto i : m)
//	{
//		std::cout << i.first << " ";
//		for (auto j : i.second)
//			std::cout << j << " ";
//		std::cout << std::endl;
//	}
//	return 0;
//}