//Á·Ï°9.50£º
//#include<iostream>
//#include<vector>
//#include<string>
//int main()
//{
//	std::vector<std::string> v{"12","13","15","18","21"};
//	int res = 0;
//	for (auto i : v)
//		res += std::stoi(i);
//	std::cout << res << std::endl;
//	std::vector<std::string> v1{ "15.6","12.8","13.4" };
//	double ans = 0.0;
//	for (auto i : v1)
//		ans += std::stod(i);
//	std::cout << ans << std::endl;
//	
//}

//Á·Ï°9.51£º
#include<iostream>
#include<stdexcept>
#include<string>
#include<vector>
const std::string month_dict[] = { "January","February","March","April","May","June","July","August","September","October",
"November","December" };
const std::string dict[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec" };
class date {
private:
	unsigned year, month, day;
public:
	date() = default;
	date(const std::string& ds)
	{
		if (ds[0] >= '0' && ds[0] <= '9')
		{
			std::vector<std::string> v;
			v.reserve(3);
			std::string temp;
			int prev = 0;
			for (int i = 0; i <= ds.size(); ++i)
			{
				if (ds[i] == '/' || i == ds.size())
				{
					temp = ds.substr(prev, i - prev);
					prev = i + 1;
					//std::cout << temp << std::endl;
					v.emplace_back(temp);
				}
			}
			//std::cout << v[0] << " " << v[1] << " " << v[2]<<std::endl;
			month = std::stoi(v[0]);
			day = std::stoi(v[1]);
			year = std::stoi(v[2]);
		}
		else if (ds.find_first_of(',') != ds.npos)
		{
			std::vector<std::string> v;
			v.reserve(3);
			for (int i = 0; i < 12; i++)
				if (ds.find(month_dict[i]) != std::string::npos)
				{
					v.emplace_back(std::to_string(i + 1)); break;
				}
			auto t1 = ds.find_first_of(' ');
			++t1;
			auto t2 = ds.find_first_of(',');
			std::string temp = ds.substr(t1, t2 - t1);
			//std::cout << temp << std::endl;
			v.emplace_back(temp);
			++t2;
			temp = ds.substr(t2);
			//std::cout << temp << std::endl;
			v.emplace_back(temp);
			month = std::stoi(v[0]);
			day = std::stoi(v[1]);
			year = std::stoi(v[2]);
		}
		else {
			std::vector<std::string> v;
			v.reserve(3);
			for (int i = 0; i < 12; i++)
				if (ds.find(dict[i]) != std::string::npos)
				{
					v.emplace_back(std::to_string(i + 1)); break;
				}
			auto t1 = ds.find_first_of(' ');
			++t1;
			auto t2 = ds.find_last_of(' ');
			std::string temp = ds.substr(t1, t2 - t1);
			//std::cout << temp << std::endl;
			v.emplace_back(temp);
			++t2;
			temp = ds.substr(t2);
			//std::cout << temp << std::endl;
			v.emplace_back(temp);
			month = std::stoi(v[0]);
			day = std::stoi(v[1]);
			year = std::stoi(v[2]);
		}
	}
	const int get_year() { return year; }
	const int get_month() { return month; }
	const int get_day() { return day; }
};

int main()
{
	date d1("Jan 1 1900");
	std::cout << d1.get_month() << " " << d1.get_day() << " " << d1.get_year() << std::endl;
	date d2("January 1,1900");
	std::cout << d2.get_month() << " " << d2.get_day() << " " << d2.get_year() << std::endl;
	date d3("1/1/1900");
	std::cout << d3.get_month() << " " << d3.get_day() << " " << d3.get_year() << std::endl;
	return 0;
}