//Á·Ï°13.17£º
//#include<iostream>
////class numbered
////{
////public:
////	static int count;
////	int mysn;
////	numbered() { mysn = count++; }
////};
//class numbered
//{
//public:
//	static int count;
//	int mysn;
//	numbered() { mysn = count++; }
//	numbered(const numbered& temp) { mysn = count++; }
//};
//int numbered::count = 0;
////void f(numbered s) { std::cout << s.mysn << std::endl; }
//void f(numbered& s) { std::cout << s.mysn << std::endl; }
//int main()
//{
//	numbered a, b = a, c = b;
//	f(a); f(b); f(c);
//	return 0;
//}