//练习1.18: ctrl+z表示结束输入
//#include<iostream>
//int main()
//{
//	int currVal = 0, val = 0;
//	if (std::cin >> currVal) {
//		int cnt = 1;
//		while (std::cin >> val)
//		{
//			if (val == currVal)
//				++cnt;
//			else {
//				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
//				currVal = val;
//				cnt = 1;
//			}
//		}
//		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
//	}
//	return 0;
//}
//练习1.19：
//#include<iostream>
//int main() {
//	int a, b;
//	std::cout << "请输入整数a:";
//	std::cin >> a;
//	std::cout << "请输入整数b:";
//	std::cin >> b;
//	if (a > b) 
//		for (int i = a; i >= b; i--)
//			std::cout << i << std::endl;
//	else
//		for (int i = a; i <= b; i++)
//			std::cout << i << std::endl;
//	return 0;
//}