//��ϰ5.14 Trie�ַ���������洢�ַ������� p=son[p][u]����ǧ��Ҫ��else
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