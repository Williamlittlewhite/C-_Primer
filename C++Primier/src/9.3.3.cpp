//��ϰ9.26��erase����ֵ��ɾ�������һ��Ԫ�ص�֮���λ�õĵ�������ʱ�̱��ֵ������Ǵ��ڵ�Ҫע�ⷵ�ص�����
//#include<iostream>
//#include<vector>
//#include<list>
//int main()
//{
//	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
//	std::vector<int> v1(std::begin(ia), std::end(ia));
//	std::list<int> v2(std::begin(ia), std::end(ia));
//	//for (auto i : v1)
//	//	std::cout << i << " ";
//	//std::cout << std::endl;
//	//for (auto i : v2)
//	//	std::cout << i << " ";
//	for (auto t = v1.begin(); t != v1.end(); )
//		if (((*t) & 1) == 0)
//			t = v1.erase(t); //Ҫ�ǵ�ȡ����Ӧ����ֵ������
//		else
//			++t;
//	for (auto t = v2.begin(); t != v2.end();)
//		if ((*t) & 1)
//			t = v2.erase(t);//Ҫ�ǵ�ȡ����Ӧ����ֵ������
//		else
//			++t;
//	for (auto i : v1)
//	std::cout << i << " ";
//	std::cout << std::endl;
//	for (auto i : v2)
//	std::cout << i << " ";
//	
//	std::cout << std::endl;
//	return 0;
//}