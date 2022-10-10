//Á·Ï°14.38£º
//#include<string>
//#include<iostream>
//#include<unordered_map>
//#include<vector>
//class isequal {
//private:
//	std::size_t n=2;
//public:
//	isequal(int x) :n(x) {};
//	isequal(){};
//	bool operator()(int x)
//	{
//		return n == x;
//	}
//};
//std::unordered_map<int, int> m;
//int main()
//{
//	
//	std::vector<std::string> vec{ "an","a","is","she" };
//	for (auto i : vec)
//	{
//		isequal is(i.size());
//		if (is(i.size()))
//			m[i.size()]++;
//	}
//	for (auto i : m)
//		std::cout << i.first << " " << i.second << std::endl;
//	return 0;
//}

//Á·Ï°14.39:
//#include<string>
//#include<iostream>
//#include<unordered_map>
//#include<vector>
//class isequal {
//private:
//	std::size_t n=2;
//public:
//	isequal(int x) :n(x) {};
//	isequal(){};
//	bool operator()(int x)
//	{
//		return n == x;
//	}
//};
//std::unordered_map<int, int> m;
//int main()
//{
//	
//	std::vector<std::string> vec{ "an","a","is","she","what","where"};
//	for (auto i : vec)
//	{
//		isequal is(i.size());
//		if (is(i.size()))
//			m[i.size()]++;
//	}
//	int cnt = 0;
//	for (auto i : m)
//	{
//		if (i.first <= 3)
//			std::cout << i.first << " " << i.second << std::endl;
//		else
//			cnt += i.second;
//	}
//	std::cout << ">=4" << " " << cnt;
//	return 0;
//}

//Á·Ï°14.40:
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//class cmp1 {
//public:
//	bool operator()(const string&a, const string& b)
//	{
//		return a.size() < b.size();
//	}
//};
//class cmp2 {
//private:
//	vector<string>::size_type sz;
//public:
//	cmp2(int x):sz(x) {}
//	bool operator()(const string& a)
//	{
//		return a.size() >= sz;
//	}
//};
//void biggies(vector<string>& words, vector<string>::size_type sz)
//{
//	sort(words.begin(), words.end());
//	auto end_unique = unique(words.begin(), words.end());
//	words.erase(end_unique, words.end());
//	cmp1 cmp1;
//	stable_sort(words.begin(), words.end(), cmp1);
//	cmp2 cmp2(sz);
//	auto wc = find_if(words.begin(), words.end(), cmp2);
//	auto count = words.end() - wc;
//	std::cout << count << " " << sz << std::endl;
//	for_each(wc, words.end(), [](const string& s) {std::cout << s << " "; });
//}
//int main()
//{
//	vector<string> vec{ "a","an","what","where","which","the","she" };
//	biggies(vec, 4);
//}
