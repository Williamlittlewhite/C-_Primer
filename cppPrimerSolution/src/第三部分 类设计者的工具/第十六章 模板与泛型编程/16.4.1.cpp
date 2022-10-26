//Á·Ï°16.53:
//#include<iostream>
//template<typename T>
//std::ostream& print(std::ostream& os, const T& t)
//{
//	return os << t;
//}
//template <typename T, typename... args>
//std::ostream& print(std::ostream& os,const T& t,args... rest)
//{
//	os << t << ", ";
//	return print(os, rest...);
//}
//int main()
//{
//	std::string s1 = "I love you";
//	const char* s2 = "I am white";
//	int i1 = 5;
//	double i2 = 2.0;
//	float i3 = 4.5;
//	print(std::cout, s1, s2);
//	std::cout << std::endl;
//	print(std::cout, s1);
//	std::cout << std::endl;
//	print(std::cout, s1, s2,i1,i2,i3);
//}    