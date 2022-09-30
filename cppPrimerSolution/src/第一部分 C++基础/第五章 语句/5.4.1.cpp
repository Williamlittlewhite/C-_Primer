//练习5.14 Trie字符串树解决存储字符串问题 p=son[p][u]这里千万不要加else
//#include<iostream>
//#include<string>
//const int N = 1e+5 + 10;
//int son[N][26], idx,cnt[N];
//
//void insert(std::string str)
//{
//	int p = 0;
//	for (int i = 0; str[i]; i++)
//	{
//		int u = str[i] - 'a';
//		if (!son[p][u]) son[p][u] = ++idx;
//		p = son[p][u];
//	}
//	cnt[p]++;
//}
//
//int find(std::string str)
//{
//	int p = 0;
//	for (int i = 0; str[i]; i++)
//	{
//		int u = str[i] - 'a';
//		if (!son[p][u]) return 0;
//		else p = son[p][u];
//	}
//	return cnt[p];
//}
//#include<unordered_map>
//int main()
//{
//	std::string s;
//	std::unordered_map<std::string,int> hashes;
//	while (std::cin >> s)
//	{
//		insert(s);
//		
//		hashes[s] = find(s);
//	}
//	//std::cout << find("sum") << std::endl;
//	for (auto i : hashes)
//		std::cout << i.first << " " << i.second << std::endl;
//}