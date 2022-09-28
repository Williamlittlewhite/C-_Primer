//Á·Ï°13.34&&13.36&&13.37£º
//#include<string>
//#include<set>
//class Folder;
//class Message {
//	friend void swap(Message& lhs, Message& rhs);
//	friend class Folder;
//public:
//	explicit Message(const std::string& str = ""):contents(str){};
//	Message(const Message&);
//	Message& operator=(const Message&);
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
