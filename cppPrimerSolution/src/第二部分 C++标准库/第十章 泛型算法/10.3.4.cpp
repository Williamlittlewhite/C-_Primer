//Á·Ï°10.22£º
//#include<iostream>
//#include<vector>
//#include<string>
//#include<functional>
//#include<algorithm>
//using namespace std::placeholders;
//bool check(const std::string& s,int size)
//{
//	return s.size() >= size;
//}
//
//int main()
//{
//	std::vector<std::string> words{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
//	auto t = std::bind(check, _1, 6);
//	int res = std::count_if(words.begin(), words.end(), t);
//	std::cout << res << std::endl;
//	return 0;
//}

//Á·Ï°10.24£º
//#include<iostream>
//#include<vector>
//#include<string>
//#include<functional>
//#include<algorithm>
//using namespace std::placeholders;
//bool check(const std::string& s,int size)
//{
//	return s.size() >= size;
//}
//
//int main()
//{
//	std::string s{ "turew" };
//	std::vector<std::string> words{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
//	auto t = std::bind(check, _1, s.size());
//	int res = std::count_if(words.begin(), words.end(), t);
//	std::cout << res << std::endl;
//	return 0;
//}

//10.25:
//#include<iostream>
//#include<vector>
//#include<string>
//#include<functional>
//#include<algorithm>
//using namespace std::placeholders;
//bool check(const std::string& s, int size)
//{
//	return s.size() < size;
//}
//void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz)
//{
//	std::sort(words.begin(), words.end());
//	words.erase(std::unique(words.begin(), words.end()), words.end());
//	auto u = std::bind(check, _1, sz);
//	auto t = std::partition(words.begin(), words.end(), u);
//	while (t!=words.end())
//	{
//		std::cout << *t << " ";
//		++t;
//	}
//}
//int main()
//{
//	std::vector<std::string> words{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
//	biggies(words,5);
//	return 0;
//}
