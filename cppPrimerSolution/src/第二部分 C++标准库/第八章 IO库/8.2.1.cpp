//练习8.4：
//#include<vector>
//#include<string>
//#include<iostream>
//#include<fstream>
//void read(std::string file)
//{
//	std::ifstream ifs(file);
//	if (!ifs)
//	{
//		std::cerr << "无法打开输入文件" << std::endl;
//		return;
//	}
//
//	std::string line;
//	std::vector<std::string> words;
//	while (std::getline(ifs, line))
//		words.push_back(line);
//
//	ifs.close();
//	for (auto word : words)
//		std::cout << word << std::endl;
//}
//
//int main()
//{
//	read("book_sales");
//}
//练习8.5
//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<string>
//
//int main()
//{
//	std::string temp;
//	while (std::cin >> temp)
//	{
//		std::ifstream ifs(temp);
//		if (!ifs)
//		{
//			std::cerr << "No this file" << std::endl;
//			continue;
//		}
//		std::string data;
//		std::vector<std::string> v;
//		while (ifs >> data)
//			v.push_back(data);
//		ifs.close();
//		for (auto i : v)
//			std::cout << i << std::endl;
//	}
//	
//}

//练习8.6：
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
//	
//	Sales_data total;
//	if (read(ifs, total)) {
//		Sales_data trans;
//		while (read(ifs, trans)) {
//			if (trans.isbn() == total.isbn())
//				total.combine(trans);
//			else {
//				print(std::cout, total) << std::endl;
//				total = trans;
//			}
//		}
//		print(std::cout, total) << std::endl;
//	}
//	else
//	{
//		std::cerr << "No data?！" << std::endl;
//	}
//	
//}