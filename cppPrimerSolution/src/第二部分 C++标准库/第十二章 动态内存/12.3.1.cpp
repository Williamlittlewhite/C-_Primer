//Á·Ï°12.27:
//#include<iostream>
//#include<vector>
//#include<map>
//#include<sstream>
//#include<fstream>
//class TextQuery
//{
//	
//private:
//	std::vector<std::string> v;
//	std::map<std::string,int> m;
//public:
//	friend class QueryResult;
//	TextQuery(std::ifstream& ifs) {
//		std::string temp;
//		int count = 0;
//		while (std::getline(ifs, temp))
//		{
//			v.emplace_back(temp);
//			std::cout << temp << std::endl;
//			m[temp] = ++count;
//		}
//	}
//	void show() {
//		for (auto i : m)
//			std::cout << i.second << " " << i.first << std::endl;
//	}
//};
//
//class QueryResult {
//public:
//	
//	void find(TextQuery& t,const std::string& query)
//	{
//		std::cout << std::endl;
//		std::string temp;
//		for (auto i : t.v)
//		{
//			std::istringstream is(i);
//			while (is >> temp)
//				if (temp == query)
//					std::cout << i << std::endl;
//		}
//	}
//};
//
//int main()
//{
//	std::ifstream ifs("data1");
//	TextQuery t1(ifs);
//	//t1.show();
//	QueryResult q;
//	q.find(t1,"she");
//}
//Á·Ï°12.28£º
//#include<iostream>
//#include<map>
//#include<set>
//#include<fstream>
//#include<sstream>
//#include<vector>
//int main()
//{
//	std::string temp,query;
//	std::map <std::string, int> m;
//	std::vector<std::string> v;
//	std::cin >> temp >> query;
//	std::ifstream ifs(temp);
//	int count = 0;
//	while (std::getline(ifs,temp))
//	{
//		std::string s1;
//		std::set<std::string> s;
//		v.push_back(temp);
//		m[temp] = count;
//		std::istringstream is(temp);
//		while (is >> s1)
//		{
//			m[s1] = count;
//			s.insert(s1);
//		}
//		if (s.find(query) != s.end())
//			std::cout << temp << std::endl;
//		++count;
//	}
//	//for (auto i : m)
//	//	std::cout << i.first << " " << i.second << std::endl;;
//	return 0;
//}