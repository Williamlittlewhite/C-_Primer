//��ϰ12.6��
//#include<iostream>
//#include<vector>
//#include<memory>
//void myfunc(std::vector<int>* v, std::istream& is)
//{
//	int temp;
//	while (is >> temp)
//	{
//		v->emplace_back(temp);
//	}
//}
//void print(std::vector<int>* v)
//{
//	for (auto i : (*v))
//		std::cout << i << " ";
//}
//int main()
//{
//	auto* p = new std::vector<int>();
//	myfunc(p, std::cin);
//	print(p);
//	delete p;
//	p = nullptr;
//	return 0;
//
//}

//��ϰ12.7��//����ָ����Ҫ��make_shared������ڴ�
//#include<iostream>
//#include<vector>
//#include<memory>
//void myfunc(std::shared_ptr<std::vector<int>> v, std::istream& is)
//{
//	int temp;
//	while (is>>temp)
//	{
//		v->emplace_back(temp);
//	}
//}
//void print(std::shared_ptr<std::vector<int>> v)
//{
//	for (auto i : (*v))
//		std::cout << i << " ";
//}
//int main()
//{
//	//std::shared_ptr<std::vector<int>> p(new std::vector<int>());
//	auto p = std::make_shared<std::vector<int>>();
//	myfunc(p, std::cin);
//	print(p);
//	return 0;
//
//}