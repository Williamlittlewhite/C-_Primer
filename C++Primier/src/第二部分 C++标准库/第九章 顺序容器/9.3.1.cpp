//Á·Ï°9.18£º
//#include<iostream>
//#include<string>
//#include<deque>
//
//int main()
//{
//	std::deque<std::string> dq;
//	std::string temp;
//	while (std::cin >> temp)
//		dq.push_back(temp);
//	for (auto i=dq.cbegin();i!=dq.cend();++i)
//		std::cout << *i << " ";
//}

//Á·Ï°9.19£º
//#include<iostream>
//#include<string>
//#include<list>
//
//int main()
//{
//	std::list<std::string> l1;
//	std::string temp;
//	while (std::cin >> temp)
//		l1.push_back(temp);
//	for (auto i = l1.cbegin(); i != l1.cend(); ++i)
//		std::cout << *i << " ";
//}

//Á·Ï°9.20£º
//#include<list>
//#include<deque>
//#include<iostream>
//int main()
//{
//	std::list<int> l1{ 1,5,6,7,9,4 };
//	std::deque<int> dq1, dq2;
//	for (auto i : l1)
//		if (i & 1)
//			dq1.push_back(i);
//		else
//			dq2.push_back(i);
//
//	for (auto i : dq1)
//		std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : dq2)
//		std::cout << i << " ";
//}


