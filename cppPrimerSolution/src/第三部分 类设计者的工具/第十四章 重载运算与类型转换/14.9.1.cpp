//Á·Ï°14.49:
//#include<iostream>
//#include<vector>
//class Date
//{
//public:
//	Date() = default;
//	Date(int y, int m, int d) :year(y),month(m),day(d){ }
//	explicit operator bool()
//	{
//		return 1 <= month && month <= 12 && day >= 1 && day <= days_per_month[isLeapYear() ? 1 : 0][month - 1];
//	}
//	void show()
//	{
//		std::cout << year << " " << month << " " << day;
//	}
//private:
//	int year, month, day;
//	static std::vector<std::vector<int>> days_per_month;
//	bool isLeapYear()
//	{
//		return(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//	}
//};
//std::vector<std::vector<int>> Date::days_per_month = { {31,28,31,30,31,30,31,31,30,31,30,31},
//		{31,29,31,30,31,30,31,31,30,31,30,31} };
//int main()
//{
//	if (bool(Date(1999, 6, 50)))
//		std::cout << "true!";
//	else
//		std::cout << "false!";
//}