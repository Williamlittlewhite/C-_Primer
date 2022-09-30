//Á·Ï°3.17:
//#include<iostream>
//#include<vector>
//#include<string>
//#include<cctype>
//int main()
//{
//	std::vector<std::string> vec;
//	std::string s;
//	while (std::cin>>s)
//	{
//		vec.push_back(s);
//	}
//	for (auto& temp : vec)
//		for (auto& t : temp)
//			t = toupper(t);
//
//	for (auto& temp : vec)
//		std::cout << temp << std::endl;
//}

//Á·Ï°3.20 
//#include<iostream>
//#include<vector>
//
//int main()
//{
//	std::vector<int> vec,res;
//	int s;
//	while (std::cin >> s)
//	{
//		vec.push_back(s);
//	}
//	/*for (int i = 0; i < vec.size(); i += 2)
//	{
//		if (i + 1 < vec.size())
//			res.push_back(vec[i] + vec[i + 1]);
//		else
//			res.push_back(vec[i]);
//	}*/
//	for (int i = 0,j=vec.size()-1; i <=j; i ++,j--)
//	{
//		if (i!=j)
//			res.push_back(vec[i] + vec[j]);
//		else
//			res.push_back(vec[i]);
//	}
//	for (auto& temp : res)
//		std::cout << temp << " ";
//	/*for (int i = 0, j = res.size() - 1; i <= j; i++, j--)
//	{
//		if (i != j)
//			std::cout << res[i] << " " << res[j] << " " << std::endl;
//		else
//			std::cout << res[i] << std::endl;
//	}*/
//}