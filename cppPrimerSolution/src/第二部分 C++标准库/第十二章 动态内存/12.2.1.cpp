//Á·Ï°12.23:
//#include<iostream>
//#include<string>
//#include<memory>
//int main()
//{
//
//	std::shared_ptr<char> s(new char[30], [](char* p) {delete[] p; });
//	//std::string temp1, temp2;
//	//std::cin >> temp1 >> temp2;
//	auto temp1 = "abc";
//	auto temp2 = "def";
//	std::string res = temp1 + std::string(temp2);
//	for (int i = 0; i < res.size(); i++)
//		*(s.get() + i) = res[i];
//	for (int i = 0; *(s.get() + i);i++)
//	std::cout << *(s.get() + i);
//}
//Á·Ï°12.24£º
//#include<string>
//#include<iostream>
//int main()
//{
//	std::string temp;
//	std::cin >> temp;
//	char* res = new char[temp.size()];
//	for (int i = 0;i<temp.size();++i)
//	{
//		*(res+i) = temp[i];
//		
//	}
//	std::cout << res;
//	return 0;
//}