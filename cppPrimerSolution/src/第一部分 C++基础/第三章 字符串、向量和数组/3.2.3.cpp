//练习3.6:
//#include<iostream>
//#include<string>
//int main()
//{
//	std::string s;
//	std::getline(std::cin, s);
//	for (char& temp : s)//和for (auto& temp : s)效果一样
//		temp = 'X';
//	std::cout << s << std::endl;
//	return 0;
//}

//练习3.8:
//#include<iostream>
//#include<string>
//int main()
//{
//	std::string s;
//	std::getline(std::cin, s);
//	//for (std::string::iterator i = s.begin(); i != s.end();i++)//和for (auto& temp : s)效果一样
//	//	*i = 'X';
//	//std::cout << s << std::endl;
//	int j = 0;
//	while (s[j])
//	{
//		s[j] = 'X';
//		j++;
//	}
//	std::cout << s << std::endl;
//	return 0;
//}

//练习3.10:isspace(),ispunct()的用法 包含在cctype
//#include<iostream>
//#include<string>
//#include<cctype>
//int main()
//{
//	std::string s,res;
//	std::getline(std::cin, s);
//	for (auto it = s.begin();it!=s.end();it++)
//	{
//		if (!ispunct(*it)&&!isspace(*it))
//			res += *it;
//	}
//	std::cout << res << std::endl;
//	return 0;
//}

