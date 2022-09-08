////Á·Ï°7.23&&7.24:
//#include<string>
//#include<iostream>
//class Screen {
//public:
//	using pos = std::string::size_type;
//private:
//	std::string contents;
//	pos height = 0, width = 0;
//	pos cursor = 0;
//public:
//	Screen() = default;
//	Screen(pos he, pos wd) :height(he), width(wd),contents(he*wd,' ') {};
//	Screen(pos he, pos wd, char ct) :height(he), width(wd), contents(he * wd,ct) {};
//	Screen& mov(pos x, pos y) {
//		cursor = x * width + y;
//		return *this;
//	}
//	Screen& set(char ct) {
//		contents[cursor] = ct;
//		return *this;
//	}
//	std::ostream& display(std::ostream& os)
//	{
//		os << contents;
//		return os;
//	}
//
//};
//
//int main()
//{
//	Screen myScreen(5, 5, 'X');
//	myScreen.mov(4, 0).set('#').display(std::cout);
//	std::cout << "\n";
//	myScreen.display(std::cout);
//	std::cout << "\n";
//	return 0;
//}