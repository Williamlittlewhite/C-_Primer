//��ϰ5.23 / 5.24��
//#include<iostream>
//#include<stdexcept>
//int main()
//{
//	int x1, x2;
//	while (std::cin >> x1 >> x2)
//	{
//		if (x2 == 0)
//			throw std::runtime_error("��������Ϊ0");
//		std::cout << x1 / x2 << std::endl;
//	}
//	return 0;
//}

//��ϰ5.25: 
#include<iostream>
#include<stdexcept>
int main()
{
	int x1, x2;
	while (std::cin >> x1 >> x2)
	{
		try {
			if (x2 == 0)
				throw std::runtime_error("��������Ϊ0");
			std::cout << x1 / x2 << std::endl;
		}
		catch(std::runtime_error)
		{
			std::cout << "�Ƿ���������������ִ��try�������:\n" ;
			char ch;
			std::cin >> ch;
			if (ch != 'y' && ch != 'Y')
				break;
		}
	}
	return 0;
}