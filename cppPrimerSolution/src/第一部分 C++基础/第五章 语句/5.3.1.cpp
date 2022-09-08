//Á·Ï°5.5:
//#include<iostream>
//#include<vector>
//#include<string>
//int main()
//{
//	std::vector<std::string> LookupTable{ "F","D","C","B","A","A++" };
//	int grade;
//	while (std::cin>>grade)
//	{
//		if (grade < 60) std::cout << LookupTable[0] << std::endl;
//		else if (grade == 100)
//			std::cout << LookupTable[5]<<std::endl;
//		else
//			std::cout << LookupTable[(grade-50)/10]<<std::endl;
//	}
//}

//Á·Ï°5.6:
//#include<iostream>
//#include<vector>
//#include<string>
//int main()
//{
//	std::vector<std::string> LookupTable{ "F","D","C","B","A","A++" };
//	int grade;
//	std::string res;
//	while (std::cin>>grade)
//	{
//		res = (grade < 60) ? LookupTable[0] : (grade < 100) ? LookupTable[(grade - 50) / 10] : LookupTable[5];
//		std::cout << res << std::endl;
//	}
//}