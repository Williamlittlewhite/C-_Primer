//Á·Ï°14.27:
#include<memory>
#include<iostream>
#include<vector>
#include<string>
class StrBlobPtr {
	StrBlobPtr operator+(int n);
	StrBlobPtr operator-(int n);
private:
	std::weak_ptr<std::vector<std::string>> wptr;
	std::size_t curr;
public:
	StrBlobPtr& operator++()
	{
		auto t = wptr.lock();
		int cnt = t->size();
		if (curr < cnt - 1);
		++curr;
		return *this;
	}
	StrBlobPtr& operator--()
	{
		auto t = wptr.lock();
		int cnt = t->size();
		if (curr > 0);
		--curr;
		return *this;
	}
	StrBlobPtr operator++(int)
	{
		StrBlobPtr res = *this;
		++(*this);
		return res;
	}
	StrBlobPtr operator--(int)
	{
		StrBlobPtr res = *this;
		--(*this);
		return res;
	}
};


StrBlobPtr StrBlobPtr::operator+ (int n) {
	auto ret = *this;
	ret.curr -= n;
	return ret;
}
StrBlobPtr StrBlobPtr::operator- (int n) {
	auto ret = *this;
	ret.curr -= n;
	return ret;
}
int main()
{
	return 0;
}