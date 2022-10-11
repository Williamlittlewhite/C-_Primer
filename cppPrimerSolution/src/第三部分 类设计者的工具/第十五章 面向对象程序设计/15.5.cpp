//Á·Ï°15.19:
#include<iostream>
using namespace std;
class Base
{
public:
	void pub_mem();
protected:
	int prot_mem;
private:
	char priv_mem;
};
struct  Pub_Derv:public Base
{
	int f() { return prot_mem; }
	void memfch(Base& b)
	{
		b = *this;
		cout << "Pub_Derv" << endl;
	}
};
struct Priv_Derv:private Base
{
	int f1() const { return prot_mem; }
	void memfcn(Base& b)
	{
		b = *this;
		cout << "Priv_Derv"<<endl;
	}
};
struct Prot_Derv :private Base
{
	int f2() const { return prot_mem; }
	void memfcn(Base& b)
	{
		b = *this;
		cout << "Prot_Derv" << endl;
	}
};