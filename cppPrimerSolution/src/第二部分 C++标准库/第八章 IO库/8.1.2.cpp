////��ϰ8.1&&8.2
//#include<iostream>
//std::istream& myfunc(std::istream& is)
//{
//	int temp;
//	while (is >> temp, !is.eof())  //����,��������ķ�ʽ�ܳ���
//	{
//		if (is.bad())
//			throw std::runtime_error("IO������");
//		if (is.fail()) {
//			std::cerr << "���ݴ��� �����ԣ�" << std::endl;
//			is.clear();
//			is.ignore(1024, '\n');//�ѻس�֮ǰ��1024���ַ������뻺����ɾ��
//			continue;
//		}
//		std::cout << temp << std::endl;
//	}
//	is.clear();
//	return is;
//}
//
//int main()
//{
//	myfunc(std::cin);
//}