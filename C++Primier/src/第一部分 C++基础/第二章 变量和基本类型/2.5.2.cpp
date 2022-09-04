//练习2.34：
//#include<iostream>
//int main()
//{
//	int i = 0, & r = i;
//	auto a = r;
//	const int ci = i, & cr = ci;
//	auto b = ci;
//	auto c = cr;
//	auto d = &i;
//	auto e = &ci;
//	auto& g = ci;
//
//	a = 42;
//	std::cout << a << std::endl;
//	std::cout << i << std::endl;
//	b = 42;
//	std::cout << b << std::endl;
//	std::cout << ci << std::endl;
//	c = 42;
//	std::cout << c << std::endl;
//	std::cout << ci << std::endl;
//	//d = 42;//字面量不可以给指针
//	//e = 42;//字面量不可以给指针
//	//g = 42;//常量引用不可以修改对象的值
//
//}
//练习2.35：typeinfo帮助我们打印类型
//#include<iostream>
//#include<typeinfo>
//int main()
//{
//	const int i = 42;
//	auto j = i; const auto& k = i; auto* p = &i;
//	const auto j2 = i, &k2 = i;
//	std::cout << typeid(i).name() << std::endl;
//	std::cout << typeid(j).name() << std::endl;
//	std::cout << typeid(k).name() << std::endl;
//	std::cout << typeid(p).name() << std::endl;
//	std::cout << typeid(j).name() << std::endl;
//	std::cout << typeid(k2).name() << std::endl;
//
//	return 0;
//}