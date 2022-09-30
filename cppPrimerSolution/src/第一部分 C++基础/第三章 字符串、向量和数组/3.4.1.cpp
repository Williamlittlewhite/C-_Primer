//练习3.21:
//#include<vector>
//#include<iostream>
//#include<string>
//int main()
//{
//	std::vector<int> v1;
//	std::vector<int> v2(10);
//	std::vector<int> v3(10, 42);
//	std::vector<int> v4{ 10 };
//	std::vector<int> v5{ 10,42 };
//	std::vector<std::string> v6{10};
//	std::vector<std::string> v7{10,"hi"};
//
//	std::cout << "容量" << v1.size() << std::endl;
//	std::cout << "容量" << v2.size() << std::endl;
//	for (auto it = v2.cbegin(); it != v2.cend(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;
//	std::cout << "容量" << v3.size() << std::endl;
//	for (auto it = v3.cbegin(); it != v3.cend(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;
//	std::cout << "容量" << v4.size() << std::endl;
//	for (auto it = v4.cbegin(); it != v4.cend(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;
//	std::cout << "容量" << v5.size() << std::endl;
//	for (auto it = v5.cbegin(); it != v5.cend(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;
//	std::cout << "容量" << v6.size() << std::endl;
//	for (auto it = v6.cbegin(); it != v6.cend(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;
//	std::cout << "容量" << v7.size() << std::endl;
//	for (auto it = v7.cbegin(); it != v7.cend(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;
//	return 0;
//}

//练习3.22 toupper有返回值必须接受才能改变
//#include<iostream>
//#include<string>
//#include<vector>
//int main()
//{
//	std::string temp;
//	std::vector<std::string> text;
//	while (getline(std::cin, temp))
//	{
//		text.push_back(temp);
//	}
//	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
//	{
//		if(it==text.begin())
//			for (auto& t :(*it))
//				t = toupper(t);
//		std::cout << *it << std::endl;
//	}
//	return 0;
//}
//练习3.23:
//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<int> vec(10, 5);
//	for (std::vector<int>::iterator it = vec.begin(); it < vec.end(); it++)
//		*it = *it * 2;
//	for (int num : vec)
//		std::cout << num << " " << std::endl;
//	return 0;
//}
