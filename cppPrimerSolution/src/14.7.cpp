////Á·Ï°14.30:
//#include<memory>
//#include<vector>
//#include<string>
//class StrBlobPtr {
//private:
//	std::weak_ptr<std::vector<std::string>> wptr;
//	std::size_t curr;
//public:
//	std::string& operator*()const {
//		auto t = wptr.lock();
//		std::size_t cnt = t->size();
//		if (curr < cnt)
//			return (*t)[curr];
//	}
//	
//	std::string* operator->()const {
//		return &(this->operator*());
//	}
//};
//
////Á·Ï°14.32£º
//class myclass {
//private:
//	StrBlobPtr* p;
//public:
//	std::string* operator->()const {
//		return p->operator->();
//	}
//};
