//14.16&&14.18&&14.23
//#include<iostream>
//#include<memory>
//#include<vector>
//class StrBlob {
//private:
//	std::shared_ptr<std::vector<std::string>> data;
//	friend bool operator==(const StrBlob&, const StrBlob&);
//	friend bool operator!=(const StrBlob& s1, const StrBlob& s2);
//	friend bool operator<(const StrBlob&, const StrBlob&);
//	friend bool operator>(const StrBlob&, const StrBlob&);
//	friend bool operator<=(const StrBlob&, const StrBlob&);
//	friend bool operator>=(const StrBlob&, const StrBlob&);
//};
//bool operator<(const StrBlob& s1, const StrBlob& s2)
//{
//	return *s1.data< *s2.data;
//}
//bool operator>(const StrBlob& s1, const StrBlob& s2)
//{
//	return *s1.data > *s2.data;
//}
//bool operator==(const StrBlob& s1, const StrBlob& s2)
//{
//	return s1.data == s2.data;
//}
//bool operator!=(const StrBlob& s1, const StrBlob& s2)
//{
//	return !(s1 == s2);
//}
//int main()
//{
//	StrBlob s1;
//	StrBlob s2 = s1;
//	if (s2 == s1)
//		std::cout << "true!";
//	else
//		std::cout << "false!";
//}
//class StrBlobPtr {
//private:
//	std::weak_ptr<std::vector<std::string>> wptr;
//	std::size_t curr;
//	friend bool operator==(const StrBlobPtr& s1, const StrBlobPtr& s2);
//	friend bool operator!=(const StrBlobPtr& s1, const StrBlobPtr& s2);
//};
//bool operator==(const StrBlobPtr& s1, const StrBlobPtr& s2)
//{
//	auto l = s1.wptr.lock(), r = s2.wptr.lock();
//	if (l == r)
//	{
//		return (!r || s1.curr == s2.curr);
//	}
//	else
//		return false;
//}
//bool operator!=(const StrBlobPtr& s1, const StrBlobPtr& s2)
//{
//	return !(s1 == s2);
//}
//int main()
//{
//	StrBlobPtr s1;
//	StrBlobPtr s2 = s1;
//	if (s2 == s1)
//		std::cout << "true!";
//	else
//		std::cout << "false!";
//}
//class StrVec {
//private:
//	static std::allocator<std::string> alloc;
//	std::string* elements=0;
//	std::string* first_free=0;
//	std::string* cap=0;
//	friend bool operator==(const StrVec& s1, const StrVec& s2);
//	friend bool operator!=(const StrVec& s1, const StrVec& s2);
//public:
//	StrVec& operator=(std::initializer_list<std::string> il);
//};
//bool operator==(const StrVec& s1, const StrVec& s2)
//{
//	if ((s1.cap - s1.elements) == (s2.cap - s2.elements))
//		for (auto i = 0; i != s1.first_free - s1.cap; ++i)
//			if (*(s1.elements + i) != *(s2.elements + i))
//				return false;
//	return true;
//}
//bool operator!=(const StrVec& s1, const StrVec& s2)
//{
//	return !(s1 == s2);
//}
//	
//std::allocator<std::string> StrVec::alloc;
//StrVec& StrVec::operator=(std::initializer_list<std::string> il) {
//	auto data = alloc.allocate(il.end()-il.begin());
//	if (elements)
//	{
//		for (auto p = first_free; p != elements;)
//			alloc.destroy(--p);
//		alloc.deallocate(elements, cap - elements);
//	}
//	elements = data;
//	first_free = cap = std::uninitialized_copy(il.begin(), il.end(), data);
//	return *this;
//}
//int main()
//{
//	StrVec s1;
//	StrVec s2 = s1;
//	if (s2 == s1)
//		std::cout << "true!";
//	else
//		std::cout << "false!";
//}

//class String
//{
//private:
//	static std::allocator<char> alloc;
//	char* elements=0;
//	char* first_free=0;
//	char* cap=0;
//	friend bool operator==(const String& s1, const String& s2);
//	friend bool operator!=(const String& s1, const String& s2);
//};
//bool operator==(const String& s1, const String& s2)
//{
//	if ((s1.cap - s1.elements) == (s2.cap - s2.elements))
//		for (auto i = 0; i != s1.first_free - s1.cap; ++i)
//			if (*(s1.elements + i) != *(s2.elements + i))
//				return false;
//	return true;
//}
//bool operator!=(const String& s1, const String& s2)
//{
//	return !(s1 == s2);
//}
//int main()
//{
//	String s1;
//	String s2 = s1;
//	if (s2 == s1)
//		std::cout << "true!";
//	else
//		std::cout << "false!";
//}
