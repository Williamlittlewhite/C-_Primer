//Á·Ï°3.21:
//Á·Ï°3.20 
//#include<iostream>
//#include<vector>
//
//int main()
//{
//	std::vector<int> vec,res;
//	int s;
//	while (std::cin >> s)
//	{
//		vec.push_back(s);
//	}
//	for (auto i = vec.begin(); i < vec.end(); i += 2)
//	{
//		if (i + 1 < vec.end())
//			res.push_back(*i + *(i + 1));
//		else
//			res.push_back(*i);
//	}
//	/*for (auto i = vec.begin(), j = vec.end() - 1; i <= j; i++, j--)
//	{
//		if (i!=j)
//			res.push_back(*i + *j);
//		else
//			res.push_back(*i);
//	}*/
//	for (auto& temp : res)
//		std::cout << temp << " ";
//
//}

//Á·Ï°3.25£º
//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<unsigned> scores(11, 0);
//	unsigned grade;
//	while (std::cin>>grade)
//	{
//		if (grade <= 100)
//			++*(grade / 10+scores.begin());
//	}
//	for (auto i : scores)
//		std::cout << i << " ";
//}