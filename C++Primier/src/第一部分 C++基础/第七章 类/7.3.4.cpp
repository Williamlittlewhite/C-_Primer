////��ϰ7.32��Ҫ����ĳ�Ա������Ϊ��һ�������Ԫ��ʱ��һ��Ҫע�����˳��
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
//	friend void Window_mgr::clear(ScreenIndex);//�����Window_mgr������ǰ�棬�������ﲻ֪��������ʲô
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
