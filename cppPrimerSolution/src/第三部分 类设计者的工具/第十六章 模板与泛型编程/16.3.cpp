////练习16.48：
//#include<string>
//#include<iostream>
////template<typename T> std::string debug_rep(const T& t)
////{
////	std::cout << t;
////	return std::string(t);
////}
////template<typename T>std::string debug_rep(T* t)
////{
////	std::cout << "pointer: " << t;
////	if (t)
////		std::cout << " " << debug_rep(*t);
////	else
////		std::cout << " null pointer";
////	return std::string(t);
////}
////std::string debug_rep(const std::string& s) {
////	return '"' + s + '"';
////}
////std::string debug_rep(char* p)
////{
////	return debug_rep(std::string(p));
////}
////std::string debug_rep(const char* p)
////{
////	return debug_rep(std::string(p));
////}
////
////int main()
////{
////	const char* p = "Hello world";
////	std::cout << debug_rep(p);
////	return 0;
////}
//
////练习16.50:
////template<typename T>void f(T)
////{
////	std::cout << "f(T),T是" <<typeid(T).name() << std::endl;
////}
////template<typename T>void f(const T*)
////{
////	std::cout << "f(const T*),T是" << typeid(T).name() << std::endl;
////}
////template<typename T>void g(T)
////{
////	std::cout << "g(T),T是" << typeid(T).name() << std::endl;
////}
////template<typename T>void g(T*)
////{
////	std::cout << "g(T*),T是" << typeid(T).name() << std::endl;
////}
////int main()
////{
////	int i = 42, * p = &i;
////	const int ci = 0, * p2 = &ci;
////	g(42); g(p); g(ci); g(p2);
////	f(42); f(p); f(ci); f(p2);
////	return 0;
////}