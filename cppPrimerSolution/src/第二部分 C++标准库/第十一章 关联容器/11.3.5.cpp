//练习：11.31/11.32：ctrl+z会留在输入影响下一次输入 因此必须清空之！
//#include<map>
//#include<iostream>
//#include<string>
//#include<vector>
//#include<sstream>
//int main()
//{
//	std::multimap<std::string,std::vector<std::string>> m;
//	std::string temp;
//	while (std::getline(std::cin, temp))
//	{
//		std::istringstream is(temp);
//		std::string temp1,temp2;
//		std::vector<std::string> v;
//		if (is >> temp1)
//		{
//			while (is >> temp2)
//				v.push_back(temp2);
//			m.insert({ temp1,v });
//		}
//	}
//	std::cout << std::endl;
//	std::cout << "数据集完成！！" << std::endl;
//	std::cin.clear();  //ctrl+z会留在输入影响下一次输入 因此必须清空之！
//	std::string word;
//	while (std::cin >> word)
//	{
//		if (m.equal_range(word).first == m.equal_range(word).second)
//			puts("No this author!");
//		else
//		{
//			auto t1 = m.lower_bound(word), t2 = m.upper_bound(word);
//			m.erase(t1, t2);
//		}
//
//	}
//	for (auto t : m)
//	{
//		std::cout << t.first << " ";
//		for (auto j : t.second)
//			std::cout << j << " ";
//		std::cout << std::endl;
//	}
//	return 0;
//}