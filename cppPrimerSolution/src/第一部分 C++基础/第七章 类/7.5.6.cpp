//��ϰ7.53��
#include<iostream>
class Debug {
private:
	bool io;
	bool hw;
	bool other;
public:
	constexpr Debug(bool i,bool h,bool o):io(i),hw(h),other(o){}
	constexpr Debug(bool i = true):io(i),hw(i),other(i){}
	constexpr bool any() { return io || hw || other; }

	void set_io(bool b) { io = b;}
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { other = b; }

};