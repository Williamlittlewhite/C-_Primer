//��ϰ12.16��
#include<memory>
int main()
{
	std::unique_ptr<int> p(new int);
	auto q = p;
	return 0;
}