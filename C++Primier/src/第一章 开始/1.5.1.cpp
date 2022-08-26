//练习1.20：
//#include<iostream>
//#include"Sales_item.h"
//windowsg++出现连接问题解决方案
//【解决办法】搜索了一下，网上提供的解决方法：
//在 / Mingw / bin目录下，找到libstdc++ - 6.dll文件，将其放到C:\Windows\System32目录下。
//后面考虑到本机的系统是win10 64位，因此找到目录：C:\Windows\SysWOW64，将步骤1中的libstdc++ - 6.dll文件复制过去，发现居然可以了
//int main()
//{
//	Sales_item s1;
//	std::cin >> s1;
//	std::cout << s1 << std::endl;
//}

//练习1.21&&1.22
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
				std::cout << "输入的物品ISBN不同!" << std::endl;
				return -1;
			}
		}
	}
	else
	{
		std::cout << "数据不合法！" << std::endl;
		return -1;
	}
	return 0;
}