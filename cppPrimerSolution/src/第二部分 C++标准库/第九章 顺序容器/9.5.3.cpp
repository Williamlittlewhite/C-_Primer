//Á·Ï°9.47£º
//#include<iostream>
//#include<string>
//int main()
//{
//	std::string s{ "ab2c3d7R4E6" };
//	std::string Dict{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
//	std::string num{ "123456789" };
//	std::string::size_type i = 0;
//	while ((i = s.find_first_of(Dict, i)) != std::string::npos)
//	{
//		std::cout << s[i] << " ";	
//		++i;
//	}
//	std::cout << std::endl;
//	i = 0;
//	while ((i = s.find_first_of(num, i)) != std::string::npos)
//	{
//		std::cout << s[i] << " ";
//		++i;
//	}
//
//}

//Á·Ï°9.49:
//#include<string>
//#include<iostream>
//#include<fstream>
//int main()
//{
//	std::string ascender{ "bdfhklt" };
//	std::string descender{ "gjpqy" };
//	std::string dict = ascender + descender;
//	std::ifstream ifs("data.txt");
//	if (!ifs)
//		puts("No this file!");
//	std::string temp,res;
//	while (ifs >> temp)
//	{
//		if (temp.find_first_of(dict) == std::string::npos)
//			if (temp.size() > res.size())
//				res = temp;
//	}
//	std::cout << res << std::endl;
//}

