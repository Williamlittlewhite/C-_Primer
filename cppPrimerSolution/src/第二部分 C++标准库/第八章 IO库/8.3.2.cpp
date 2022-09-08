//Á·Ï°8.14£º
//#include<iostream>
//#include<fstream>
//#include<sstream>
//#include<vector>
//
//struct PersonInfo {
//	std::string name;
//	std::vector<std::string> phones;
//};
//bool valid(const std::string& s) {
//	return true;
//}
//
//std::string format(const std::string& s) { return s; }
//int main()
//{
//	std::ifstream ifs("sstream");
//	if (!ifs)
//		puts("no this file!");
//	std::string line, word;
//	std::vector<PersonInfo> people;
//	while (getline(ifs,line))
//	{
//		PersonInfo info;
//		std::istringstream record(line);
//		record >> info.name;
//		while (record >> word)
//			info.phones.push_back(word);
//		people.push_back(info);
//	}
//	std::ostringstream os;
//	for (const auto& entry : people) {
//		std::ostringstream formatted, badNums;
//		for (const auto& nums : entry.phones) {
//			if (!valid(nums))
//				badNums << " " << nums;
//			else
//				formatted << " " << format(nums);
//		}
//		if (badNums.str().empty())
//			os << entry.name << " " << formatted.str() << std::endl;
//		else
//			std::cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << std::endl;
//	}
//	std::cout << os.str();
//
//	
//}