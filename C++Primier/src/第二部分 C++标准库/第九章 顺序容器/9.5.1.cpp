//��ϰ9.41��string(vector.data(),vector.size())�Ĺ��췽��
//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<char> v{ 'h','e','l','l','o' };
//	//std::string s(v.begin(), v.end());
//	std::string s(v.data(), v.size());
//	std::cout << s << std::endl;
//}

//��ϰ9.42��Ԥ�ȷ����ڴ�Ͳ��÷����ڴ����Ч��
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