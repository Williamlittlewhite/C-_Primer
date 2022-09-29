////练习13.49：
////练习13.34&&13.36&&13.37：
//#include<string>
//#include<set>
//class Folder;
//class Message {
//	friend void swap(Message& lhs, Message& rhs);
//	friend class Folder;
//public:
//	explicit Message(const std::string& str = ""):contents(str){};
//	Message(const Message&);
//	Message(Message&&);
//	Message& operator=(const Message&);
//	Message& operator=(Message&&);
//	~Message();
//	void save(Folder&);
//	void remove(Folder&);
//private:
//	std::string contents;
//	std::set<Folder*> folders;
//	void add_to_Folders(const Message&);
//	void remove_from_Folders();
//	void addFldr(Folder* f) { folders.insert(f); }
//	void removeFldr(Folder* f) { folders.erase(f); }
//	void move_Folders(Message* m)
//	{
//		folders = std::move(m->folders);
//		for (auto f : folders)
//		{
//			f->remMsg(m);
//			f->addMsg(this);
//		}
//		m->folders.clear();
//	}
//};
//void Message::save(Folder& f)
//{
//	folders.insert(&f);
//	f.addMsg(this);
//}
//void Message::remove(Folder& f)
//{
//	folders.erase(&f);
//	f.remMsg(this);
//}
//void Message::add_to_Folders(const Message& m)
//{
//	for (auto f : m.folders)
//		f->addMsg(this);
//}
//void Message::remove_from_Folders()
//{
//	for (auto f : folders)
//		f->remMsg(this);
//}
//Message::Message(const Message& m) :contents(m.contents), folders(m.folders)
//{
//	add_to_Folders(m);
//}
//Message::Message(Message&& m) : contents(std::move(m.contents))
//{
//	move_Folders(&m);
//}
//
//Message::~Message() {
//	remove_from_Folders();
//}
//Message& Message::operator=(const Message& rhs)
//{
//	remove_from_Folders();
//	contents = rhs.contents;
//	folders = rhs.folders;
//	add_to_Folders(rhs);
//	return *this;
//}
//
//Message& Message::operator=(Message&& rhs)
//{
//	if (this != &rhs)
//	{
//		remove_from_Folders();
//		contents = std::move(rhs.contents);
//		move_Folders(&rhs);
//	}
//	return *this;
//}
//
//class Folder {
//	friend void swap(Message&, Message&);
//	friend class Message;
//public:
//	~Folder();
//	Folder(const Folder&);
//
//	Folder& operator=(const Folder&);
//	Folder() = default;
//private:
//	std::set<Message*> msgs;
//	void add_to_Messages(const Folder&);
//	void remove_from_Msgs();
//	void addMsg(Message* m) { msgs.insert(m); }
//	void remMsg(Message* m) { msgs.erase(m); }
//
//};
//void Folder::add_to_Messages(const Folder& f)
//{
//	for (auto msg : f.msgs)
//		msg->addFldr(this);
//}
//void Folder::remove_from_Msgs()
//{
//	while (!msgs.empty())
//		(*msgs.begin())->remove(*this);
//}
//Folder::Folder(const Folder& f):msgs(f.msgs){
//	add_to_Messages(f);
//}
//
//Folder::~Folder()
//{
//	remove_from_Msgs();
//}
//
//Folder& Folder::operator=(const Folder& f)
//{
//	remove_from_Msgs();
//	msgs = f.msgs;
//	add_to_Messages(f);
//	return *this;
//}
//void swap(Message& lhs, Message& rhs)
//{
//	using std::swap;
//	for (auto f : lhs.folders)
//		f->remMsg(&lhs);
//	for (auto f : rhs.folders)
//		f->remMsg(&rhs);
//	swap(lhs.folders, rhs.folders);
//	swap(lhs.contents, rhs.contents);
//	for (auto f : lhs.folders)
//		f->addMsg(&lhs);
//	for (auto f : rhs.folders)
//		f->addMsg(&rhs);
//}
//#include<iostream>
//#include<string>
//#include<algorithm>
//class StrVec {
//public:
//	StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
//	StrVec(std::initializer_list<std::string> temp);
//	StrVec(const StrVec&);
//	StrVec(StrVec&&)noexcept;
//	StrVec& operator=(const StrVec&);
//	StrVec& operator=(StrVec&&)noexcept; 
//	~StrVec() { free(); }
//	void push_back(const std::string&);
//	std::size_t size() const { return first_free - elements; }
//	std::size_t capacity() const { return cap - elements; }
//	std::string* begin() const { return elements; }
//	std::string* end() const { return first_free; }
//	void reserve(std::size_t n);
//	void resize(std::size_t n);
//	void resize(std::size_t n,const std::string& s);
//private:
//	static std::allocator<std::string> alloc;
//	void chk_n_alloc() { if (size() >= capacity()) reallocate(); }
//	std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
//	std::pair<std::string*, std::string*> alloc_n_copy_new(const std::string*, const std::string*);
//	void free();
//	void reallocate(std::size_t capacity);
//	void reallocate();
//	std::string* elements;
//	std::string* first_free;
//	std::string* cap;
//
//};
//std::allocator<std::string> StrVec::alloc;
//StrVec::StrVec(std::initializer_list<std::string> temp)
//{
//	auto newdata = alloc_n_copy(temp.begin(), temp.end());
//	elements = newdata.first;
//	first_free = cap = newdata.second;
//}
//
//void StrVec::push_back(const std::string& s)
//{
//	chk_n_alloc();
//	alloc.construct(first_free++, s);
//}
//
//void StrVec::reserve(std::size_t n)
//{
//	if (n > capacity())
//		reallocate(n);
//}
//
//void StrVec::resize(std::size_t n)
//{
//	while (n > size())
//		push_back("");
//	while (n < size())
//		alloc.destroy(--first_free);	
//}
//void StrVec::resize(std::size_t n,const std::string& s)
//{
//	while (n > size())
//		push_back(s);
//}
//
//
//std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string* b, const std::string* e) {
//	auto data = alloc.allocate(e - b);
//	return { data,std::uninitialized_copy(b,e,data) };
//}
//std::pair<std::string*, std::string*> StrVec::alloc_n_copy_new(const std::string* b, const std::string* e) {
//	auto data = alloc.allocate(e - b);
//	return { data,std::uninitialized_copy(b,e,data) };
//}

//void StrVec::free()
//{
//	if (elements)
//	{
//		for (auto p = first_free; p != elements;)
//			alloc.destroy(--p);
//		alloc.deallocate(elements,cap - elements);
//	}
//}
//void StrVec::free()
//{
//	if (elements)
//	{
//		std::for_each(elements, first_free, [](std::string& s) {alloc.destroy(&s); });
//		alloc.deallocate(elements, cap - elements);
//	}
//}
//StrVec::StrVec(const StrVec& s)
//{
//	auto newdata = alloc_n_copy(s.begin(), s.end());
//	elements = newdata.first;
//	first_free = cap = newdata.second;
//}
//StrVec::StrVec(StrVec&& s) noexcept
//{
//	elements = s.elements;
//	first_free = s.first_free;
//	cap = s.cap;
//}
//
//StrVec& StrVec::operator=(const StrVec& rhs)
//{
//	auto data = alloc_n_copy(rhs.begin(), rhs.end());
//	free();
//	elements = data.first;
//	first_free = cap = data.second;
//	return *this;
//}
//StrVec& StrVec::operator=(StrVec&& rhs) noexcept
//{
//	if (this != &rhs)
//	{
//		free();
//		elements = rhs.elements;
//		first_free = rhs.first_free;
//		cap = rhs.cap;
//		rhs.elements = rhs.first_free = rhs.cap = nullptr;
//	}
//	return *this;
//}
//void StrVec::reallocate(std::size_t capacity)
//{
//	auto newcapacity = capacity;
//	auto newdata = alloc.allocate(newcapacity);
//	auto dest = newdata;
//	auto elem = elements;
//	for (std::size_t i = 0; i != size(); ++i)
//		alloc.construct(dest++, std::move(*elem++));
//	elements = newdata;
//	first_free = dest;
//	cap = elements + newcapacity;
//}
//
//void StrVec::reallocate()
//{
//	auto newcapacity = capacity() ? 2 * capacity() : 1;
//	auto newdata = alloc.allocate(newcapacity);
//	auto dest = newdata;
//	auto elem = elements;
//	for (std::size_t i = 0; i != size(); ++i)
//		alloc.construct(dest++, std::move(*elem++));
//	elements = newdata;
//	first_free = dest;
//	cap = elements + newcapacity;
//}
//#include<memory>
//#include<iostream>
//class String
//{
//public:
//	String():elements(nullptr),first_free(nullptr),cap(nullptr){}
//	String(const char* s);
//	String(const String& s);
//	String(String&& s)noexcept;
//	String& operator= (const String s);
//	String& operator= (String&& s)noexcept;
//	std::size_t size()const
//	{
//		return first_free - elements;
//	}
//	std::size_t capacity()const
//	{
//		return cap - elements;
//	}
//	char* begin()const {
//		return elements;
//	}
//	char* end() const {
//		return first_free;
//	}
//private:
//	static std::allocator<char> alloc;
//	char* elements;
//	char* first_free;
//	char* cap;
//};
//std::allocator<char> String::alloc;
//String::String(const char* s)
//{
//	
//	int count = 0;
//	while (s[count]) count++;
//	auto newdata = alloc.allocate(count);
//	for (int i = 0; i < count; ++i)
//		alloc.construct(newdata + i, s[i]);
//	elements = newdata;
//	cap = first_free = newdata + count;
//	
//}
//
//String::String(const String& s)
//{
//	std::cout << "拷贝构造函数被调用" << std::endl;
//	auto newdata = alloc.allocate(s.capacity());
//	elements = newdata;
//	first_free = newdata + s.size();
//	cap = newdata + s.capacity();
//	std::uninitialized_copy(s.begin(), s.end(), newdata);
//}
//String::String(String&& s)noexcept
//{
//	elements = s.elements;
//	first_free = s.first_free;
//	cap = s.cap;
//	s.elements = s.first_free = s.cap = nullptr;
//}
//String& String::operator= (const String s)
//{
//	elements = first_free = cap = nullptr;
//	auto newdata = alloc.allocate(s.capacity());
//	elements = newdata;
//	first_free = newdata + s.size();
//	cap = newdata + s.capacity();
//	std::uninitialized_copy(s.begin(), s.end(), newdata);
//	return *this;
//}
//String& String::operator= (String&& s)noexcept
//{
//	if (this != &s)
//	{
//		elements = first_free = cap = nullptr;
//		auto newdata = alloc.allocate(s.capacity());
//		elements = newdata;
//		first_free = newdata + s.size();
//		cap = newdata + s.capacity();
//		std::uninitialized_copy(s.begin(), s.end(), newdata);
//	}
//	s.elements = s.first_free = s.cap = nullptr;
//	return *this;
//}

//练习13.50：
//#include<memory>
//#include<iostream>
//class String
//{
//public:
//	String():elements(nullptr),first_free(nullptr),cap(nullptr){}
//	String(const char* s);
//	String(const String& s);
//	String(String&& s)noexcept;
//	String& operator= (const String s);
//	String& operator= (String&& s)noexcept;
//	std::size_t size()const
//	{
//		return first_free - elements;
//	}
//	std::size_t capacity()const
//	{
//		return cap - elements;
//	}
//	char* begin()const {
//		return elements;
//	}
//	char* end() const {
//		return first_free;
//	}
//private:
//	static std::allocator<char> alloc;
//	char* elements;
//	char* first_free;
//	char* cap;
//};
//std::allocator<char> String::alloc;
//String::String(const char* s)
//{
//	
//	int count = 0;
//	while (s[count]) count++;
//	auto newdata = alloc.allocate(count);
//	for (int i = 0; i < count; ++i)
//		alloc.construct(newdata + i, s[i]);
//	elements = newdata;
//	cap = first_free = newdata + count;
//	
//}
//
//String::String(const String& s)
//{
//	std::cout << "拷贝构造函数被调用" << std::endl;
//	auto newdata = alloc.allocate(s.capacity());
//	elements = newdata;
//	first_free = newdata + s.size();
//	cap = newdata + s.capacity();
//	std::uninitialized_copy(s.begin(), s.end(), newdata);
//}
//String::String(String&& s)noexcept
//{
//	std::cout << "移动构造调用！" <<std::endl;
//	elements = s.elements;
//	first_free = s.first_free;
//	cap = s.cap;
//	s.elements = s.first_free = s.cap = nullptr;
//}
//String& String::operator= (const String s)
//{
//	elements = first_free = cap = nullptr;
//	auto newdata = alloc.allocate(s.capacity());
//	elements = newdata;
//	first_free = newdata + s.size();
//	cap = newdata + s.capacity();
//	std::uninitialized_copy(s.begin(), s.end(), newdata);
//	return *this;
//}
//String& String::operator= (String&& s) noexcept
//{
//	std::cout << "移动赋值调用！" << std::endl;
//	if (this != &s)
//	{
//		elements = first_free = cap = nullptr;
//		auto newdata = alloc.allocate(s.capacity());
//		elements = newdata;
//		first_free = newdata + s.size();
//		cap = newdata + s.capacity();
//		std::uninitialized_copy(s.begin(), s.end(), newdata);
//	}
//	s.elements = s.first_free = s.cap = nullptr;
//	return *this;
//}
//
//#include<vector>
//int main()
//{
//	std::vector<String> v;
//	String s1("One"), s2("Two");
//	//String s3(s2);
//	//v.push_back(s1);
//	//v.push_back(std::move(s2));
//	//v.push_back(String("Three"));
//	v.push_back("Four");
//}