//Á·Ï°6.17
//#include<iostream>
//#include<string>
//bool IncludeUpper(const std::string& s)
//{
//	for (char i : s)
//	{
//		if (i <= 'Z' && i >= 'A')
//			return true;
//	}
//	return false;
//}
//
//void Tolower(std::string& s)
//{
//	for (char& i : s)
//		if (i <= 'Z' && i >= 'A')
//			i = std::tolower(i);
//}
//
//int main()
//{
//	std::string temp;
//	while (std::cin >> temp)
//	{
//		if (IncludeUpper(temp))
//		{
//			Tolower(temp);
//			std::cout << temp << std::endl;
//		}
//		else
//			std::cout << "No big character!" << std::endl;
//	}
//}