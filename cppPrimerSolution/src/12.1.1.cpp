//Á·Ï°12.2£º
//#include<memory>
//#include<vector>
//#include<string>
//#include<iostream>
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
//	const std::string& back() const {
//		return data->back();
//	}
//	const std::string& front() const {
//		return data->front();
//	}
//};
//
//int main()
//{
//	std::vector<std::string> v{ "bzx","william","xiaobai" };
//	StrBlob temp(v);
//
//	std::cout << temp.back() << " " << temp.front();
//}