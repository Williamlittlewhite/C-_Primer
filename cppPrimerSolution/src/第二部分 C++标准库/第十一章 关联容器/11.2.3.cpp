//Á·Ï°11.12&&11.13£º
//#include<string>
//#include<iostream>
//#include<utility>
//#include<vector>
//int main()
//{
//	std::pair<std::string, int> p;
//	std::vector<std::pair<std::string, int>> v;
//	std::string temp1;
//	int temp2;
//	while (std::cin >> temp1 >> temp2)
//	{
//		v.push_back({ temp1,temp2 });
//		v.push_back(std::make_pair(temp1, temp2));
//		v.push_back(std::pair<std::string, int>(temp1, temp2));
//	}
//
//	for (auto i : v)
//		std::cout << i.first << " " << i.second << std::endl;
//
//}

//Á·Ï°11.14£º
//#include<map>
//#include<string>
//#include<vector>
//#include<iostream>
//#include<utility>
//int main()
//{
//	std::map<std::string, std::vector<std::pair<std::string,std::string>>> m;
//	m.insert({ "bai",{{"baizexin","0624"},{"baiqingyu","0511"}}
//});
//	m.insert({ "han",{{"hanrunhua","0245"},{"hanbaojun","0755"} }
//});
//	m.insert({ "wang",{{"hanrunhua","0372"},{"wangyun","5642"}}});
//	for (auto i : m["bai"])
//		std::cout <<" "<< i.first << " " << i.second;
//	std::cout << std::endl;
//	for (auto i : m["han"])
//		std::cout << " " << i.first << " " << i.second;
//	std::cout << std::endl;
//	for (auto i : m["wang"])
//		std::cout << " " << i.first << " " << i.second;
//	return 0;
//}