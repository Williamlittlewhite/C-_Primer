//��ϰ3.35:
//#include<iostream>
//int main()
//{
//	int a[10];
//	for (int* it = std::begin(a); it < std::end(a); it++)
//		*it = 0;
//	for (auto i : a)
//		std::cout << i << " ";
//	return 0;
//}

//��ϰ3.36:
//#include<iostream>
//#include<vector>
//bool cmp(int a[], int b[],int n)
//{
//	for (int i = 0; i < n; i++)
//		if (a[i] != b[i])
//			return false;
//	return true;
//}
//bool cmp(std::vector<int> a, std::vector<int> b)
//{
//	if (a.size() != b.size())
//		return false;
//	for (auto it = a.begin(); it < a.end(); it++)
//		if (*it != *(b.begin() + (it - a.begin())))
//			return false;
//	return true;
//}
//int main()
//{
//	int a[5] = { 0 };
//	int b[5] = { 0,1,2,3,4 };
//	std::vector<int> v1(10, 0);
//	std::vector<int> v2(10, 0);
//	if (cmp(a, b, 5))
//		std::cout << "������һ��" << std::endl;
//	else
//		std::cout << "�����鲻һ��" << std::endl;
//	if(cmp(v1,v2))
//		std::cout << "������һ��" << std::endl;
//	else
//		std::cout << "��������һ��" << std::endl;
//}