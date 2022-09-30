////练习5.17:双指针算法
//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<int> v1{ 0,1,1,2 }, v2{ 0,1,1,2,3,5,8 };
//	int i = 0, j = 0;
//	while (i < v1.size() && j < v2.size())
//	{
//		if (v1[i] == v2[j])i++;
//		j++;
//		//std::cout << i << std::endl;
//	}
//	if (i == v1.size())
//		std::cout << "是前缀" << std::endl;
//	else
//		std::cout << "不是前缀" << std::endl;
//}