////��ϰ8.9:
////#include<iostream>
////#include<sstream>
////std::istream& myfunc(std::istream& is)
////{
////	std::string temp;
////	while (is >> temp, !is.eof())  //����,��������ķ�ʽ�ܳ���
////	{
////		if (is.bad())
////			throw std::runtime_error("IO������");
////		if (is.fail()) {
////			std::cerr << "���ݴ��� �����ԣ�" << std::endl;
////			is.clear();
////			is.ignore(1024, '\n');//�ѻس�֮ǰ��1024���ַ������뻺����ɾ��
////			continue;
////		}
////		std::cout << temp << std::endl;
////	}
////	is.clear();
////	return is;
////}
////
////int main()
////{
////	std::ostringstream os;
////	os << "I am Little White who like c plus plus!" << std::endl;
////	std::istringstream is(os.str());
////	myfunc(is);
////	return 0;
////}
//
////��ϰ8.10��
////#include<iostream>
////#include<fstream>
////#include<sstream>
////#include<vector>
////int main()
////{
////	std::ifstream ifs("book_sales");
////	std::vector<std::string> record;
////	if (!ifs)
////		std::cerr << "No this file!" << std::endl;
////	std::string temp;
////	while (std::getline(ifs,temp))
////	{
////		record.push_back(temp);
////	}
////	for (auto re : record)
////	{
////		std::istringstream is(re);
////		std::string word;
////		while(is >> word)
////			std::cout << word << std::endl;
////		std::cout << std::endl;
////	}
////	return 0;
////}
//
////��ϰ8.11��
//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<vector>
//int main()
//{
//	std::ifstream ifs("book_sales");
//	std::vector<std::string> record;
//	if (!ifs)
//		std::cerr << "No this file!" << std::endl;
//	std::string temp;
//	while (std::getline(ifs,temp))
//	{
//		record.push_back(temp);
//	}
//	std::istringstream is("");
//	for (auto re : record)
//	{
//		is.str(re);
//		std::string word;
//		while(is >> word)
//			std::cout << word << std::endl;
//		is.clear();
//		std::cout << std::endl;
//	}                              
//	return 0;
//}