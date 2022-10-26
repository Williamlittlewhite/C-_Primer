////Á·Ï°16.12&&16.24:
//#include<vector>
//#include<memory>
//#include<stdexcept>
//#include<iostream>
//template <typename T> class Blob {
//public:
//	typedef T value_type;
//	typedef typename std::vector<T>::size_type size_type;
//	Blob();
//	Blob(std::initializer_list<T> il);
//	Blob(typename std::vector<T>::iterator il, typename std::vector<T>::iterator i2):data(new std::vector<T>(il, i2)){}
//	size_type size() const { return data->size(); }
//	bool empty()const { return data->empty(); }
//	void push_back(const T& t) { data->push_back(t); }
//	void pop_back() { data->pop_back(); };
//	T& back() { return data->back(); };
//	T& operator[](size_type i)
//	{
//		check(i, "subscript out of range");
//		return (*data)[i];
//	};
//private:
//	std::shared_ptr<std::vector<T>> data;
//	void check(size_type i, const std::string& msg) const
//	{
//		if (i >= data->size())
//			throw std::out_of_range(msg);
//	}
//};
//
//template<typename T> Blob<T>::Blob() :data(std::make_shared<std::vector<T>>()) {}
//template<typename T> Blob<T>::Blob(std::initializer_list<T> il) :data(std::make_shared<std::vector<T>(il)>)
//{}
//
//int main()
//{
//	std::vector<std::string> b1{"a","an","the"};
//	Blob<std::string> b3(b1.begin(), b1.end());
//	std::cout << b3[1];
//}
////
////template <typename T> class BlobPtr {
////public:
////	BlobPtr() :curr(0){}
////	BlobPtr(Blob<T> &a,std::size_t sz=0):wptr(a.data),curr(sz) {}
////	T& operator*()const
////	{
////		auto p = check(curr, "deference past end");
////		return (*p)[curr];
////	}
////	BlobPtr operator++() {
////		check(curr, "increment past end of BlobPtr");
////		++curr;
////		return *this;
////	}
////	BlobPtr operator--() {
////		--curr;
////		check(curr, "decrement past begin of BlobPtr");
////		return *this;
////	}
////private:
////	std::shared_ptr<std::vector<T>> check(std::size_t i, const std::string& s)const
////	{
////		auto ret = wptr.lock();
////		if (!ret)
////			throw std::runtime_error("unbound BlobPtr");
////		if (i>=ret->size())
////			throw std::out_of_range(s);
////		return ret;
////	}
////	std::weak_ptr<std::vector<T>> wptr;
////	std::size_t curr;
////};
////
////
//////Á·Ï°16.14&&16.15:
////#include<string>
////#include<iostream>
////template<int H, int W> class Screen;
////template<int H, int W>std::ostream& operator<<(std::ostream&, Screen<H, W>&);
////template<int H, int W> std::istream& operator>>(std::istream&, Screen<H, W>&);
////template<int H, int W> class Screen {
////	friend std::ostream& operator<< <H,W>(std::ostream&, Screen<H, W>&);
////	friend std::istream& operator>> <H,W>(std::istream&, Screen<H, W>&);
////public:
////	Screen():contents(H*W,' ') {}
////	Screen(char c):contents(H*W,c){}
////	friend class Window_mgr;
////	char get()const { return contents[cursor]; }
////	inline char get(int, int)const;
////	Screen& clear(char = bkground);
////private:
////	static const char bkground = ' ';
////public:
////	Screen& move(int r, int c);
////	Screen& set(char);
////	Screen& set(int, int, char);
////	Screen& display(std::ostream& os){ do_display(os); return*this; }
////	const Screen& display(std::ostream& os)const { do_display(os); return *this; }
////private:
////	void do_display(std::ostream& os)const { os << contents; }
////	int cursor = 0;
////	std::string contents;
////};
////template<int H, int W>std::ostream& operator<<(std::ostream& os, Screen<H, W>& s)
////{
////	os << s.contents;
////	return os;
////}
////template<int H, int W>std::istream& operator>>(std::istream& is, Screen<H, W>& s)
////{
////	std::string  t;
////	is >> t;
////	s.contents = t.substr(0, H * W);
////	return is;
////}
////
////template<int H, int W> Screen<H, W>& Screen<H, W>::clear(char c)
////{
////	contents = std::string(H * W, c);
////	return *this;
////}
////
////template<int H, int W> inline Screen<H, W>& Screen<H, W>::move(int r, int c)
////{
////	int row = r * W;
////	cursor = row + c;
////	return *this;
////}
////template<int H, int W> inline char Screen<H, W>::get(int r, int c)const
////{
////	int row = r * W;
////	return contents[row + c];
////}
////
////
////template<int H, int W> inline Screen<H, W>& Screen<H, W>::set(char c)
////{
////	contents[cursor] = c;
////	return *this;
////}
////
////template<int H, int W> inline Screen<H, W>& Screen<H, W>::set(int r, int col, char ch)
////{
////	contents[r * W + col] = ch;
////	return *this;
////}
////
////int main()
////{
////	Screen<5, 3> myscreen;
////	//myscreen.display(std::cout);
////	//std::cout << std::endl;
////	//myscreen.move(4, 0).set('#');
////	//myscreen.display(std::cout);
////
////	//std::cout << std::endl;
////
////	//Screen<5, 5> nextscreen('X');
////	//nextscreen.move(4, 0).set('#').display(std::cout);
////	//std::cout << "\n";
////	//nextscreen.display(std::cout);
////	//std::cout << std::endl;
////
////	//const Screen<5, 3> blank;
////	//myscreen.set('#').display(std::cout);
////	//std::cout << std::endl;
////	//blank.display(std::cout);
////	//std::cout << std::endl;
////
////	//myscreen.clear('Z').display(std::cout);
////	//myscreen.move(4, 0);
////	//myscreen.set('#');
////	//std::cout << "\n";
////	//myscreen.display(std::cout); std::cout << std::endl;
////
////	//Screen<5, 3> temp = myscreen.move(4, 0);
////	//temp.set('#');
////	//myscreen.display(std::cout);
////	//std::cout << std::endl;
////
////
////	std::cin >> myscreen;
////	std::cout << myscreen;
////	return 0;
////}
//
////Á·Ï°16.16:
////#include<iostream>
////template<typename T> class Vec {
////public:
////	Vec():elements(nullptr),first_free(nullptr),cap(nullptr){}
////	Vec(const StrVec&);
////	Vec& operator=(const Vec&);
////	~Vec();
////	void push_back(const T&);
////	std::size_t size()const { return first_free - elements; }
////	std::size_t capacity()const { return cap - elements; }
////	T* begin()const { return elements; }
////	T* end()const { return first_free; }
////
////private:
////	static std::allocator<T> alloc;
////	void chk_n_alloc()
////	{
////		if (size() == capacity())reallacate();
////	}
////	std::pair<T*, T*> alloc_n_copy(const T*, const T*);
////	void free();
////	void reallocate();
////	T* elements;
////	T* first_free;
////	T* cap;
////};