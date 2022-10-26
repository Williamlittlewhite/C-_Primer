////Á·Ï°16.56:
//#include<iostream>
//template<typename T> std::ostream& print(std::ostream& os, const T& t)
//{
//	os << t<<" ";
//	return os;
//}
//template<typename T,typename ...Args> std::ostream& print(std::ostream& os, const T& t,Args& ...rest)
//{
//	os << t << " ";
//	return print(os,rest...);
//}
//template<typename... Args> std::ostream& errorMsg(std::ostream& os, const Args&... rest)
//{
//	return print(os, rest...);
//}
//
//int main()
//{
//	std::string s1 = "I love you";
//	const char* s2 = "I am white";
//	int i1 = 5;
//	double i2 = 2.0;
//	float i3 = 4.5;
//	errorMsg(std::cerr, s1, s2, i1, i2, i3);
//}    