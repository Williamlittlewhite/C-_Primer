//练习10.27：
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<list>
//int main()
//{
//	std::vector<int> v{ 1,5,6,7,5,4,6,8,9,4 };
//	std::list<int> lt;
//	std::sort(v.begin(), v.end());
//	std::unique_copy(v.begin(), v.end(), std::back_inserter(lt));
//	for (auto i : lt)
//		std::cout << i << " ";
//	return 0;
//}

//练习10.28：inserter()第一参数是容器 第二参数表示在哪个位置插入 并且插入后指向下位 == push_back
#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<list>
int main()
{
	std::vector<int> v{ 1,2,3,4,5,6,7,8,9};
	std::deque<int> lt;
	std::copy(v.begin(), v.end(), std::inserter(lt,lt.begin()));
	for (auto i : lt)
		std::cout << i << " ";
	std::cout << std::endl;
	lt.clear();
	std::copy(v.begin(), v.end(), std::back_inserter(lt));
	for (auto i : lt)
		std::cout << i << " ";
	std::cout << std::endl;
	lt.clear();
	std::copy(v.begin(), v.end(), std::front_inserter(lt));
	for (auto i : lt)
		std::cout << i << " ";
	return 0;
}