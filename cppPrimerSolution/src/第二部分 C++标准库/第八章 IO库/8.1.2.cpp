////练习8.1&&8.2
//#include<iostream>
//std::istream& myfunc(std::istream& is)
//{
//	int temp;
//	while (is >> temp, !is.eof())  //这种,处理输入的方式很常用
//	{
//		if (is.bad())
//			throw std::runtime_error("IO流错误");
//		if (is.fail()) {
//			std::cerr << "数据错误 请重试！" << std::endl;
//			is.clear();
//			is.ignore(1024, '\n');//把回车之前的1024个字符从输入缓存区删除
//			continue;
//		}
//		std::cout << temp << std::endl;
//	}
//	is.clear();
//	return is;
//}
//
//int main()
//{
//	myfunc(std::cin);
//}