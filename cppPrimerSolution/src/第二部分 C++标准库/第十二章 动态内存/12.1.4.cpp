//��ϰ12.14://ɾ������Ҫ��ǰ��Ķ���ƥ��,������ָ��ֻ����ָ���ʼ��
//#include<iostream>
//#include<memory>
//struct destination{};
//struct connection {};
//connection connect(destination* ds){
//	std::cout << "build connection!" << std::endl;
//	return connection();
//}
//void disconnect(connection temp)
//{
//	std::cout << "close connection!" << std::endl;
//	
//}
//void end_connection(connection* temp)
//{
//	disconnect(*temp);
//}
//void myfunc(destination& temp)
//{
//	connection t = connect(&temp);
//	std::shared_ptr<connection> p(&t,end_connection);
//}
//
//int main()
//{
//	destination ds;
//	myfunc(ds);
//}
//��ϰ12.15��
//#include<iostream>
//#include<memory>
//struct destination {};
//struct connection {};
//connection connect(destination* ds) {
//	std::cout << "build connection!" << std::endl;
//	return connection();
//}
//void disconnect(connection temp)
//{
//	std::cout << "close connection!" << std::endl;
//
//}
//void myfunc(destination& temp)
//{
//	connection t = connect(&temp);
//	std::shared_ptr<connection> p(&t, [](connection* temp) {disconnect(*temp); });
//}
//
//int main()
//{
//	destination ds;
//	myfunc(ds);
//}