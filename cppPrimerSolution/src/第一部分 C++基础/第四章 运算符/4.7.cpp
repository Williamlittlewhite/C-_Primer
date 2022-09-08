//Á·Ï°4.21:
//#include<iostream>
//#include<vector>
//int main()
//{
//	std::vector<int> v={0,5,8,4,6,9,54,65};
//	for (int& temp : v)
//		(temp % 2) ? temp *= 2 : temp *= 1;
//	for (auto temp : v)
//		std::cout << temp << " ";
//}

//Á·Ï°4.22:
//#include<iostream>
//#include<vector>
//#include<string>
//int main()
//{
//	int grade;
//	std::string finalgrade;
//	while (std::cin >> grade)
//	{
//	/*	finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade < 60) ? "fail" : "low pass";*/
//		if (grade > 90) finalgrade = "high pass";
//		else if (grade > 75) finalgrade = "pass";
//		else if (grade >= 60) finalgrade = "lowpass";
//		else finalgrade = "fail";
//		std::cout << finalgrade << std::endl;
//	}
//}