//��ϰ1.20��
//#include<iostream>
//#include"Sales_item.h"
//windowsg++������������������
//������취��������һ�£������ṩ�Ľ��������
//�� / Mingw / binĿ¼�£��ҵ�libstdc++ - 6.dll�ļ�������ŵ�C:\Windows\System32Ŀ¼�¡�
//���濼�ǵ�������ϵͳ��win10 64λ������ҵ�Ŀ¼��C:\Windows\SysWOW64��������1�е�libstdc++ - 6.dll�ļ����ƹ�ȥ�����־�Ȼ������
//int main()
//{
//	Sales_item s1;
//	std::cin >> s1;
//	std::cout << s1 << std::endl;
//}

//��ϰ1.21&&1.22
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item book, temp;
	if (std::cin >> book)
	{
		while (std::cin >> temp)
		{
			if (book.isbn() == temp.isbn())
			{
				book = book + temp;
				std::cout << book << std::endl;
			}
			else
			{
				std::cout << "�������ƷISBN��ͬ!" << std::endl;
				return -1;
			}
		}
	}
	else
	{
		std::cout << "���ݲ��Ϸ���" << std::endl;
		return -1;
	}
	return 0;
}