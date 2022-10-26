////Á·Ï°16.28:
//#ifndef SP_H
//#define SP_H
//
//#include<iostream>
//using namespace std;
//
//template<typename T>
//class SP {
//public:
//	SP():p(nullptr),use(nullptr) {}
//	explicit SP(T* pt):p(pt),use(new size_t(1)){}
//	SP(const SP& sp) :p(sp.p), use(sp.use) { if (use)++* use; }
//	SP& operator=(const SP& rhs) {
//		if (rhs.use)
//			++* rhs.use;
//		if (use && -- * use == 0) {
//			delete p;
//			delete use;
//		}
//		p = rhs.p;
//		use = rhs.use;
//		return *this;
//	}
//	~SP() {
//		if (use && -- * use == 0) {
//			delete p;
//			delete use;
//		}
//	}
//	T& operator*() { return *p; }
//	T& operator*()const { return *p; }
//private:
//	T* p;
//	size_t *use;
//};
//
//template <typename T>
//class UP
//{
//public:
//	UP():p(nullptr){}
//	UP(const UP&) = delete;
//	explicit UP(T* pt):p(pt){}
//	UP& operator=(const UP&) = delete;
//	~UP() {
//		if (p)
//			delete p;
//	}
//	T* release() {
//		T* q = p;
//		p = nullptr;
//		return q;
//	}
//	void reset(T* new_p)
//	{
//		if (p)
//			delete p;
//		p = new_p;
//	}
//	T& operator*() { return *p; }
//	T& operator*() const { return *p; }
//private:
//	T* p;
//};
//#endif // !SP_H
