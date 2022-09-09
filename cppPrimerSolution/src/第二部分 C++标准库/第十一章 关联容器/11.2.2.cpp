//Á·Ï°11.9£º
//#include<map>
//#include<list>
//#include<iostream>
//#include<sstream>
//#include<string>
//#include<algorithm>
//void trans(std::string& s)
//{
//	for (int i = 0;i<s.size();i++)
//	{
//		if ( s[i] >= 'A' && s[i] <= 'Z')
//		{
//			s[i] = s[i] - 'A' + 'a';
//		}
//		else if ((s[i] < 'a') || (s[i] > 'z'))
//		{
//			s.erase(i,1);
//		}
//	}
//	return;
//}
//int main()
//{
//	std::map<std::string, std::list<int>> m;
//	std::string temp,word;
//	int lineno = 0;
//	while (std::getline(std::cin,temp))
//	{
//		++lineno;
//		std::istringstream is(temp);
//		while (is >> word)
//		{
//			trans(word);
//			if(std::find(m[word].begin(),m[word].end(),lineno)==m[word].end())
//				m[word].push_back(lineno);
//		}
//	}
//
//	for (auto w : m)
//	{
//		std::cout << w.first << "\t";
//		for (auto i : w.second)
//			std::cout << i << " ";
//		std::cout << std::endl;
//	}
//	return 0;
//}

