//��ϰ10.11��stable_sort��ά�ֳߴ����ʱ��ԭ���ַ������ֵ���
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<iostream>
//bool cmp(const std::string& s1, const std::string& s2)
//{
//	return s1.size() < s2.size();
//}
//void elimDups(std::vector<std::string>& words)
//{
//	std::sort(words.begin(), words.end());
//	auto i = std::unique(words.begin(), words.end());
//	words.erase(i, words.end());
//	std::stable_sort(words.begin(), words.end(), cmp);
//	return;
//}
//
//int main()
//{
//	std::vector<std::string> words{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
//	elimDups(words);
//	for (auto i : words)
//		std::cout << i << " ";
//}
//��ϰ10.12��const����ֻ�ܵ���const���� ��Ϊ������this���� ���ܰ�const ��*this ת���� ��*this
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
//bool cmp(const Sales_data& s1,const Sales_data& s2)
//{
//	
//	int temp = s1.isbn().compare(s2.isbn());
//	if (temp < 0)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	std::vector<Sales_data> v;
//	v.emplace_back(Sales_data("william"));
//	v.emplace_back(Sales_data("whites"));
//	v.emplace_back(Sales_data("edgrng"));
//	std::sort(v.begin(), v.end(), cmp);
//	for (auto i : v)
//		std::cout << i.isbn() << " ";
//	
//}
//��ϰ10.13��
//#include<algorithm>
//#include<string>
//#include<iostream>
//#include<vector>
//bool myfunc(const std::string& s)
//{
//	if (s.size() >= 5)
//		return true;
//	return false;
//}
//int main()
//{
//	std::vector<std::string> v;
//	v.emplace_back("edg");
//	v.emplace_back("whites");
//	v.emplace_back("rng");
//	v.emplace_back("williamswhites");
//	auto t = std::partition(v.begin(), v.end(), myfunc);
//	for (auto i = v.begin();i!=t;++i)
//		std::cout << *i << " ";
//	
//}