////练习7.32当要把类的成员函数作为另一个类的友元的时候，一定要注意类的顺序！
//#include<string>
//#include<iostream>
//#include<vector>
//class Window_mgr {
//	using ScreenIndex = std::vector<Screen>::size_type;
//private:
//	std::vector<Screen> screens{ Screen(24,80) };
//public:
//	void clear(ScreenIndex index);
//};
//
//class Screen {
//	friend void Window_mgr::clear(ScreenIndex);//必须把Window_mgr放在最前面，否则这里不知道究竟有什么
//public:
//	using pos = std::string::size_type;
//private:
//	std::string contents;
//	pos width = 0 , height = 0;
//	pos cursor = 0;
//public:
//	Screen() = default;
//	Screen(pos wd,pos he, char ch):width(wd),height(he),contents(width*height,ch){}
//	Screen(pos wd,pos he):width(wd),height(he),contents(width*height,' ') {}
//	Screen& mov(pos x, pos y) {
//		cursor = x * width + y;
//		return *this;
//	}
//	Screen& set(char ch) {
//		contents[cursor] = ch;
//		return *this;
//	}
//	std::ostream& display(std::ostream& os)
//	{
//		os << contents <<std::endl;
//		return os;
//	}
//};
//
//void Window_mgr::clear(ScreenIndex index){
//	Screen& s = screens[index];
//	s.contents = " ";
//}
