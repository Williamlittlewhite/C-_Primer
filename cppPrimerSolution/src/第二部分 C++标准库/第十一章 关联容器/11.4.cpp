//Á·Ï°11.38£º
//#include<unordered_map>
//#include<iostream>
//#include<string>
//#include<sstream>
//int main()
//{
//	std::unordered_map<std::string, std::string> m{ {"bre","be right back "},{"k","okay?"},{"y","why"},{"r","are"},{"u","you"},{"pic","picture"},{"thk","thanks!"},{"18r","later"} };
//	std::string text;
//	while (std::getline(std::cin, text))
//	{
//		std::istringstream is(text);
//		std::string temp;
//		while (is>>temp)
//		{
//			if (m.find(temp) != m.end())
//				temp = m[temp];
//			std::cout << temp << " ";
//		}
//	}
//}

//#include<unordered_map>
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
//	std::unordered_map<std::string, int> m;
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