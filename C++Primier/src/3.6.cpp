//��ϰ3.43��������ά����������������ý��з�Χfor����
//ѧ��ʹ�� int (&i)[4]�� int (*i)[4]
//#include<iostream>
//int main()
//{
//	int ia[3][4] = { {1,2,3,4},{5,4,5,6},{4,3,5,8}};
//	for (int(&i)[4] : ia)
//	{
//		for (int j : i)
//			std::cout << j << " ";
//		std::cout << std::endl;
//	}
//	
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			std::cout << ia[i][j] << " ";
//		std::cout << std::endl;
//	}
//	
//	for (int (* i)[4] = ia; i < ia+3; i++)
//	{
//		for (int* j = *i; j < *i + 4; j++)
//			std::cout << *j << " ";	
//		std::cout << std::endl;
//	}
//}
//��ϰ3.44��ѧ�������������������ָ�뼰����
//#include<iostream>
//typedef int re_int[4];
//using  re_int = int[4];
//int main()
//{
//	int ia[3][4] = { {1,2,3,4},{5,4,5,6},{4,3,5,8} };
//	for (re_int(&i) : ia)
//	{
//		for (int j : i)
//			std::cout << j << " ";
//		std::cout << std::endl;
//	}
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			std::cout << ia[i][j] << " ";
//		std::cout << std::endl;
//	}
//
//	for (re_int* i = ia; i < ia + 3; i++)
//	{
//		for (int* j = *i; j < *i + 4; j++)
//			std::cout << *j << " ";
//		std::cout << std::endl;
//	}
//}

//��ϰ3.45��
//#include<iostream>
//
//int main()
//{
//	int ia[3][4] = { {1,2,3,4},{5,4,5,6},{4,3,5,8} };
//	for (auto (&i) : ia)
//	{
//		for (int j : i)
//			std::cout << j << " ";
//		std::cout << std::endl;
//	}
//
//
//	for (auto i = 0; i < 3; i++)
//	{
//		for (auto j = 0; j < 4; j++)
//			std::cout << ia[i][j] << " ";
//		std::cout << std::endl;
//	}
//
//	for (auto i = ia; i < ia + 3; i++)
//	{
//		for (auto j = *i; j < *i + 4; j++)
//			std::cout << *j << " ";
//		std::cout << std::endl;
//	}
//}