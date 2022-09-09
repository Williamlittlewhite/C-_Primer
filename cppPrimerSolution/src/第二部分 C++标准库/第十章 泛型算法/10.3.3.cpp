//练习10.20：
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//int main()
//{
//	std::vector<std::string> words{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
//	int res = std::count_if(words.begin(), words.end(), [](const std::string& temp)
//		{return temp.size() >= 6; });
//	std::cout << res << std::endl;
//	return 0;
//}
//练习10.21：mutable可以改变捕获的临时变量的值，引用也可以
//#include<iostream>
//int main()
//{
//	{
//		int a = 5;
//		/*auto t = [&a]() {
//			if (a > 0)
//				--a;
//			else if (a == 0)
//				return true;
//			return false;
//		};*/
//		auto t = [a]() mutable ->bool{
//			if (a > 0)
//				--a;
//			else if (a == 0)
//				return false;
//			return true;
//
//		};
//		
//		if (a) std::cout << t() << std::endl;
//		if (a) std::cout << t() << std::endl;
//		if (a) std::cout << t() << std::endl;
//		if (a) std::cout << t() << std::endl;
//		if (a) std::cout << t() << std::endl;
//		if (a) std::cout << t() << std::endl;
//	
//	}
//}