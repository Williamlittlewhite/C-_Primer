//Á·Ï°6.9:
#include"6.1.2.h"

double abs(double n)
{
	if (n >= 0) return n;
	else return -n;
}
int fact(int n)
{
	if (n == 1) return 1;
	return fact(n - 1) * n;
}