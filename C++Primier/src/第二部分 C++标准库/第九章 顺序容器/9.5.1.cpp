//练习9.41：string(vector.data(),vector.size())的构造方法
//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<char> v{ 'h','e','l','l','o' };
//	//std::string s(v.begin(), v.end());
//	std::string s(v.data(), v.size());
//	std::cout << s << std::endl;
//}

//练习9.42：预先分配内存就不用分配内存提高效率
//#include<iostream>
//#include<string>
//int main()
//{
//	std::string s;
//	s.reserve(100);
//	char temp;
//	while (std::cin>>temp)
//	{
//		s.push_back(temp);
//	}
//	std::cout << s;
//}