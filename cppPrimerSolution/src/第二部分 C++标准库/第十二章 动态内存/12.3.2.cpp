//Á·Ï°12.30£º
//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<vector>
//#include<string>
//#include<map>
//#include<set>
//class TextQuery {
//public:
//	std::vector<std::string> v;
//	std::map<std::string, std::set<int>> m;
//	TextQuery(std::ifstream& ifs)
//	{
//		std::string temp;
//		while (std::getline(ifs, temp))
//		{
//			v.push_back(temp);
//			std::istringstream is(temp);
//			while (is >> temp)
//				m[temp].insert(v.size());
//		}
//	}
//	std::set<int>& query(std::string temp)
//	{
//		if (m.find(temp) != m.end())
//			return m[temp];	
//	}
//};
//std::ostream& printf(std::ostream& os, std::set<int>& s)
//{
//	for (auto i : s)
//		os << i << " ";
//	return os;
//}
//void runQueries(std::ifstream& infile)
//{
//	TextQuery tq(infile);
//	while (true)
//	{
//		std::cout << "enter word to look for, or q to quit: ";
//		std::string s;
//		if (!(std::cin >> s) || s == "q") break;
//		printf(std::cout, tq.query(s)) << std::endl;
//	}
//}
//int main()
//{
//	std::ifstream ifs("data1");
//	runQueries(ifs);
//	return 0;
//}

//Á·Ï°12.32:
//#include<iostream>
//#include<fstream>
//#include<memory>
//#include<sstream>
//#include<vector>
//#include<string>
//#include<map>
//#include<set>
//class StrBlob
//{
//private:
//	std::shared_ptr<std::vector<std::string>> data;
//public:
//	StrBlob() {
//		data = std::make_shared<std::vector<std::string>>();
//	}
//	StrBlob(std::vector<std::string> v) {
//		data = std::make_shared<std::vector<std::string>>(v);
//	}
//	void push_back(std::string& temp)const
//	{
//		data->push_back(temp);
//	}
//	int size()const
//	{
//		return data->size();
//	}
//	const std::string& back() const {
//		return data->back();
//	}
//	const std::string& front() const {
//		return data->front();
//	}
//};
//
//class TextQuery {
//public:
//	StrBlob v;
//	std::map<std::string, std::set<int>> m;
//	TextQuery(std::ifstream& ifs)
//	{
//		std::string temp;
//		while (std::getline(ifs, temp))
//		{
//			v.push_back(temp);
//			std::istringstream is(temp);
//			while (is >> temp)
//				m[temp].insert(v.size());
//		}
//	}
//	std::set<int>& query(std::string temp)
//	{
//		if (m.find(temp) != m.end())
//			return m[temp];
//	}
//};
//std::ostream& printf(std::ostream& os, std::set<int>& s)
//{
//	for (auto i : s)
//		os << i << " ";
//	return os;
//}
//void runQueries(std::ifstream& infile)
//{
//	TextQuery tq(infile);
//	while (true)
//	{
//		std::cout << "enter word to look for, or q to quit: ";
//		std::string s;
//		if (!(std::cin >> s) || s == "q") break;
//		printf(std::cout, tq.query(s)) << std::endl;
//	}
//}
//int main()
//{
//	std::ifstream ifs("data1");
//	runQueries(ifs);
//	return 0;
//}

//Á·Ï°12.33:
//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<vector>
//#include<string>
//#include<map>
//#include<set>
//class TextQuery {
//public:
//	std::vector<std::string> v;
//	std::map<std::string, std::set<int>> m;
//	TextQuery(std::ifstream& ifs)
//	{
//		std::string temp;
//		while (std::getline(ifs, temp))
//		{
//			v.push_back(temp);
//			std::istringstream is(temp);
//			while (is >> temp)
//				m[temp].insert(v.size());
//		}
//	}
//	std::set<int>& query(std::string temp)
//	{
//		if (m.find(temp) != m.end())
//			return m[temp];	
//	}
//};
//std::ostream& printf(std::ostream& os, std::set<int>& s)
//{
//	for (auto i : s)
//		os << i << " ";
//	return os;
//}
//void runQueries(std::ifstream& infile)
//{
//	TextQuery tq(infile);
//	while (true)
//	{
//		std::cout << "enter word to look for, or q to quit: ";
//		std::string s;
//		if (!(std::cin >> s) || s == "q") break;
//		printf(std::cout, tq.query(s)) << std::endl;
//	}
//}
//int main()
//{
//	std::ifstream ifs("data1");
//	runQueries(ifs);
//	return 0;
//}

