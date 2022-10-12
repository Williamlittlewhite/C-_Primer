//练习15.20:对于某个节点来说，派生类是否能转换为基类关键在于对此节点来说 基类的公有成员是否是可访问的
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
	void memfcn(Base& b)
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
struct Prot_Derv :protected Base
{
	int f2() const { return prot_mem; }
	void memfcn(Base& b)
	{
		b = *this;
		cout << "Prot_Derv" << endl;
	}
};
struct Derived_from_Public :public Pub_Derv
{
	int use_base() { return prot_mem; }
	void memfcn(Base& b)
	{
		b = *this;
		cout << "Derived_from_Public" << endl;
	}
};
struct Derived_from_Protected :protected Prot_Derv
{
	int use_base() { return prot_mem; }
	void memfcn(Base& b)
	{
		b = *this;
		cout << "Derived_from_Protected" << endl;
	}
};

int main()
{
	Pub_Derv d1;
	Priv_Derv d2;
	Prot_Derv d3;
	Derived_from_Public dd1;
	Derived_from_Protected dd3;
	Base base;
	Base* p = new Base;
	p = &d1;
	//p = &d2;
	//p = &d3;
	p = &dd1;
	//p = &dd3;
	d1.memfcn(base);
	d2.memfcn(base);
	d3.memfcn(base);
	dd1.memfcn(base);
	//dd2.memfcn(base);
	dd3.memfcn(base);
	return 0;
}
//练习15.22:
class Figure {
public:
	Figure(double, double);
protected:
	double xSize, ySize;
};

class Figure_2D :public Figure {
public:
	Figure_2D(double, double);
	virtual double area() = 0;
	virtual double pcrimeter() = 0;
};
class Figure_3D:public Figure
{
public:
	Figure_3D(double,double);
	virtual double cubage() = 0;
protected:
	double zSzie;
};
class Rectangle :public Figure_2D
{
public:
	Rectangle(double, double);
	virtual double area();
	virtual double perimeter();
};

class Circle :public Figure_2D
{
public:
	Circle(double, double);
	virtual double area();
	virtual double perimeter();
};

class Sphere :public Figure_3D {
public:
	Sphere(double, double, double);
	virtual double cubage();
};

class Cone : public Figure_3D {
public:
	Cone(double, double, double);
	virtual double cubage();
};
