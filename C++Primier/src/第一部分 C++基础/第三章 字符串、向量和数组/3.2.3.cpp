//��ϰ3.6:
//#include<iostream>
//#include<string>
//int main()
//{
//	std::string s;
//	std::getline(std::cin, s);
//	for (char& temp : s)//��for (auto& temp : s)Ч��һ��
//		temp = 'X';
//	std::cout << s << std::endl;
//	return 0;
//}

//��ϰ3.8:
//#include<iostream>
//#include<string>
//int main()
//{
//	std::string s;
//	std::getline(std::cin, s);
//	//for (std::string::iterator i = s.begin(); i != s.end();i++)//��for (auto& temp : s)Ч��һ��
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

//��ϰ3.10:isspace(),ispunct()���÷� ������cctype
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

