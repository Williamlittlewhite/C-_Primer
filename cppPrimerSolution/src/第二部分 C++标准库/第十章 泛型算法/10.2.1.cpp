//��ϰ10.3��
#include<numeric>
#include<iostream>
#include<vector>
int main()
{
	std::vector<int> v(10, 4);
	int sum  = std::accumulate(v.begin(), v.end(), 0);
	std::cout << sum << std::endl;
	return 0;
}


