//Á·Ï°11.3£º
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
//		m[temp]++;
//
//	for (auto it : m)
//		std::cout << it.first << " " << it.second << std::endl;
//}

//Á·Ï°11.4£º
//#include<map>
//#include<iostream>
//#include<fstream>
//#include<string>
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
//	std::map<std::string, int> m;
//	//std::fstream ifs("word_count");
//	std::string temp;
//	while (std::cin >> temp)
//	{
//		trans(temp);
//		//std::cout << temp;
//		m[temp]++;
//	}
//	for (auto it : m)
//		std::cout << it.first << " " << it.second << std::endl;
//}