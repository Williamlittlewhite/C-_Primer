//练习9.43 KMP算法字符串匹配！
//#include<iostream>
//#include<string>
//const int N = 1e+5 + 10;
//int ne[N];
//void Replace(std::string& s, const std::string& oldvalue, const std::string& newvalue)
//{
//	for (int i = 2, j = 0; i <= oldvalue.size()-1; i++)
//	{
//		while (j && oldvalue[i] != oldvalue[j + 1]) j = ne[j];
//		if (oldvalue[i] == oldvalue[j + 1]) ++j;
//		ne[i] = j;
//	}
//	auto t = s.begin();
//	for (int i = 1, j = 0; i <= s.size()-1; i++)
//	{
//		while (j && s[i] != oldvalue[j + 1]) j = ne[j];
//		if (s[i] == oldvalue[j + 1]) j++;
//		if (j == oldvalue.size()-1)
//		{
//			t  = s.erase(s.begin() + i - j + 1, s.begin() + i + 1);
//			/*std::cout << j << std::endl;*/
//			for (auto temp : newvalue)
//			{
//				if (temp != '1')
//				{
//					t = s.insert(t, temp);
//					++t;
//				}
//			}
//			j = ne[j];
//
//		}
//	}
//
//
//}
//
//int main()
//{
//	std::string s, oldvalue, newvalue;
//	std::cin >> s >> oldvalue >> newvalue;
//	s = "1" + s;
//	oldvalue = "1" + oldvalue;
//	newvalue = "1" + newvalue;
//	std::cout << s << std::endl;
//	std::cout << oldvalue << std::endl;
//	std::cout << newvalue << std::endl;
//	
//	Replace(s, oldvalue, newvalue);
//	for (auto i : s)
//		if (i != '1')
//			std::cout << i;
//
//	return 0;
//}

//练习9.44：s.find(string,pos)表示从s[pos]开始（包含）寻找与string字符串匹配，返回对应s的位置s[p];
//s.replace(pos,size1,string)表示把s[pos]-s[size1]全部替换为string对应字符串
//#include<iostream>
//#include<string>
//
//void myfunc(std::string& s, const std::string& oldvalue, const std::string& newvalue)
//{
//	int p = 0;
//	while ((p = s.find(oldvalue, p)) != std::string::npos)
//	{
//		s.replace(p, oldvalue.size(), newvalue);
//		p += newvalue.size();
//	}
//}
//
//int main()
//{
//	std::string s, oldvalue, newvalue;
//	std::getline(std::cin, s);
//	std::getline(std::cin, oldvalue);
//	std::getline(std::cin, newvalue);
//
//	std::cout << s << std::endl;
//
//	myfunc(s, oldvalue, newvalue);
//
//	std::cout << s << std::endl;
//	return 0;
//}

//练习9.45：
//#include<iostream>
//#include<string>
//std::string& myfunc(std::string & name, const std::string& prefix, const std::string& suffix)
//{
//	
//	name.insert(name.begin(),prefix.begin(),prefix.end());
//	name.append(suffix);
//	return name;
//}
//int main()
//{
//	std::string s{"Williams Whites"};
//	std::string res;
//	res = myfunc(s, "Mr.", " II");
//	std::cout << res;
//	return 0;
//}

//练习9.46：
//#include<iostream>
//#include<string>
//std::string& myfunc(std::string& name, const std::string& prefix, const std::string& suffix)
//{
//
//	name.insert(name.begin(), prefix.begin(), prefix.end());
//	name.append(suffix);
//	return name;
//}
//int main()
//{
//	std::string s{ "Williams Whites" };
//	std::string res;
//	res = myfunc(s, "Mr.", " II");
//	std::cout << res;
//	return 0;
//}

//练习9.46：
//#include<iostream>
//#include<string>
//std::string& myfunc(std::string& name, const std::string& prefix, const std::string& suffix)
//{
//
//	name.insert(0, prefix);
//	name.insert(name.size(),suffix);
//	return name;
//}
//int main()
//{
//	std::string s{ "Williams Whites" };
//	std::string res;
//	res = myfunc(s, "Mr.", " II");
//	std::cout << res;
//	return 0;
//}
