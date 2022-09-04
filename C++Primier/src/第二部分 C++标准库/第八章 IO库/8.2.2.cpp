//练习8.7：
//#include<iostream>
//#include<fstream>
//#include"Sales_data.h"
//
//int main(int argc,char** argv)
//{
//	std::ifstream ifs(argv[1]);
//	//std::cout << argv[1] << std::endl;
//	if (!ifs)
//		std::cerr << "No file" << std::endl;
//	std::ofstream ofs(argv[2]);
//	if (!ofs) //可以自己创造文件保存的！
//		std::cerr << "No right to this file" << std::endl;
//	Sales_data total;
//	if (read(ifs, total)) {
//		Sales_data trans;
//		while (read(ifs, trans)) {
//			if (trans.isbn() == total.isbn())
//				total.combine(trans);
//			else {
//				print(ofs, total) << std::endl;
//				total = trans;
//			}
//		}
//		print(ofs, total) << std::endl;
//	}
//	else
//	{
//		std::cerr << "No data?！" << std::endl;
//	}
//	
//}

//练习8.8：
//#include<iostream>
//#include<fstream>
//#include"Sales_data.h"
//
//int main(int argc,char** argv)
//{
//	std::ifstream ifs(argv[1]);
//	//std::cout << argv[1] << std::endl;
//	if (!ifs)
//		std::cerr << "No file" << std::endl;
//	std::ofstream ofs(argv[2],std::ofstream::app);
//	if (!ofs) //可以自己创造文件保存的！
//		std::cerr << "No right to this file" << std::endl;
//	Sales_data total;
//	if (read(ifs, total)) {
//		Sales_data trans;
//		while (read(ifs, trans)) {
//			if (trans.isbn() == total.isbn())
//				total.combine(trans);
//			else {
//				print(ofs, total) << std::endl;
//				total = trans;
//			}
//		}
//		print(ofs, total) << std::endl;
//	}
//	else
//	{
//		std::cerr << "No data?！" << std::endl;
//	}
//	
//}