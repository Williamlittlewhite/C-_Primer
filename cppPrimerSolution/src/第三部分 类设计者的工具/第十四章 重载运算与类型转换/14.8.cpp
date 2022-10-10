//Á·Ï°14.34£º
//#include<iostream>
//class IfElseThen
//{
//public:
//	IfElseThen() {}
//	IfElseThen(int i1,int i2,int i3):val1(i1),val2(i2),val3(i3){}
//	int operator()(int i1, int i2, int i3) { return i1 ? i2 : i3; }
//private:
//	int val1=0, val2=0, val3=0;
//};
//
//int main()
//{
//	IfElseThen ifs;
//	std::cout << ifs(4, 5, 6);
//}

//Á·Ï°14.35£º
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
class PrintString {
public:
	PrintString():is(std::cin){};
	PrintString(std::istream& temp):is(temp){}
	/*void operator()()
	{
		std::string line;
		while(getline(is,line))
			std::cout << line << std::endl;
	}*/
	std::string operator()()
	{
		std::string line;
		if(!getline(is, line))
			line = "";
		return line;
	}
private:
	std::istream &is;
};
//int main()
//{
//	std::ifstream ifs("asv.txt");
//	PrintString a(ifs);
//	a();
//}

//Á·Ï°14.36£º
//void testReadString()
//{
//	PrintString ps;
//	std::vector<std::string> vec;
//	while (true)
//	{
//		std::string line = ps();
//		if (!line.empty())
//			vec.emplace_back(line);
//		else
//			break;
//	}
//	for (auto i : vec)
//		std::cout << i << std::endl;
//}
//int main()
//{
//	testReadString();
//}

//Á·Ï°14.37:
//#include<iostream>
//#include<vector>
//#include<algorithm>
//class isequal {
//public:
//	bool operator()(int a)
//	{
//		return a == oldvalue;
//	}
//private:
//	int oldvalue = 12;
//};
//int main()
//{
//	isequal eq;
//	std::vector<int> vec{ 5,8,12,12,50 };
//	std::replace_if(vec.begin(), vec.end(), eq, 30);
//	for (auto i : vec)
//		std::cout << i << " ";
//}