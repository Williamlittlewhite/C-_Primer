//这里没调通 有问题！
#include<iostream>
template<typename T> class Vec {
public:
	Vec():elements(nullptr),first_free(nullptr),cap(nullptr){}
	/*Vec(const Vec&);
	Vec& operator=(const Vec&);
	~Vec();
	void push_back(const T&);*/
	std::size_t size()const { return first_free - elements; }
	std::size_t capacity()const { return cap - elements; }
	T* begin()const { return elements; }
	T* end()const { return first_free; }
	template<class... Args>void emplace_back(Args&&...args)
	{
		//chk_n_alloc();
		alloc.construct(first_free++, std::forward<Args>(args)...);
	};
private:
	static std::allocator<T> alloc;
	//void chk_n_alloc()
	//{
	//	/*if (size() == capacity()) reallacate();*/
	//}
	/*std::pair<T*, T*> alloc_n_copy(const T*, const T*);
	void free();
	void reallocate();*/
private:
	T* elements;
	T* first_free;
	T* cap;
};
int main()
{
	Vec<std::string> svec;
	std::cout << "emplace " << svec.size() << std::endl;
	svec.emplace_back("End");
	svec.emplace_back(3,'!');
	for (auto i : svec)
		std::cout << i << " ";
	return 0;
}