//练习10.14：
//#include<iostream>
//int main()
//{
//	auto t = [](int a, int b) {return a + b; };
//	std::cout << t(3, 5) << std::endl;
//}

//练习10.15：
//#include<iostream>
//
//int main()
//{
//	int temp = 5;
//	auto t = [temp](int a) {return a + temp; };
//	std::cout << t(3) << std::endl;
//}

//练习10.16：
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<iostream>
//void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz)
//{
//	std::sort(words.begin(), words.end());
//	words.erase(std::unique(words.begin(), words.end()), words.end());
//	std::stable_sort(words.begin(), words.end(), [](const std::string& s1, const std::string& s2) {return s1.size() < s2.size(); });
//
//	auto t = std::find_if(words.begin(), words.end(), [sz](const std::string& temp) 
//		{return temp.size() >= sz; });
//	while (t!=words.end())
//	{
//		std::cout << *t << " ";
//		++t;
//	}
//}
//
//int main()
//{
//	std::vector<std::string> words{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
//	biggies(words, 4);
//}

//练习10.17：使用partition不需要排序 而unique必须排序
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<iostream>
//class Sales_data {
//private:
//	std::string bookString;
//public:
//	Sales_data(const std::string& s) :bookString(s){}
//	const std::string& isbn()const { return bookString; }
//};
//
//int main()
//{
//	std::vector<Sales_data> v;
//	v.emplace_back(Sales_data("william"));
//	v.emplace_back(Sales_data("whites"));
//	v.emplace_back(Sales_data("edgrng"));
//	std::sort(v.begin(), v.end(), [](const Sales_data& s1, const Sales_data& s2) 
//		{return s1.isbn() < s2.isbn(); });
//	for (auto i : v)
//		std::cout << i.isbn() << " ";
//	
//}

//练习10.18：使用stable_partition不需要排序，且维持原来的相对位置 而unique必须排序
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<iostream>
//void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz)
//{
//	std::sort(words.begin(), words.end());
//	words.erase(std::unique(words.begin(), words.end()), words.end());
//
//	auto t = std::partition(words.begin(), words.end(), [sz](const std::string& temp) 
//		{return temp.size() < sz; });
//	while (t!=words.end())
//	{
//		std::cout << *t << " ";
//		++t;
//	}
//}
//
//int main()
//{
//	std::vector<std::string> words{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
//	biggies(words, 4);
//}

//练习10.19：
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<iostream>
//void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz)
//{
//	std::sort(words.begin(), words.end());
//	words.erase(std::unique(words.begin(), words.end()), words.end());
//
//	auto t = std::stable_partition(words.begin(), words.end(), [sz](const std::string& temp)
//		{return temp.size() < sz; });
//	while (t != words.end())
//	{
//		std::cout << *t << " ";
//		++t;
//	}
//}
//
//int main()
//{
//	std::vector<std::string> words{ "the","quick","red","fox","jumps","slow","the","over","red","turtle" };
//	biggies(words, 4);
//}