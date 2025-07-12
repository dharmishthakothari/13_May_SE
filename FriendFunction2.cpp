#include<iostream>
using namespace std;
class B;
class A
{
	int number;
	public:
	A(int number1)
	{
		number=number1;
	}
	friend void add(A a,B b);
};
class B
{
	int number;
	public:
	B(int number1)
	{
		number=number1;
	}
	friend void add(A a,B b);
};
void add(A a,B b)
{
	cout<<a.number+b.number;
}
int main()
{
	A a(10);
	B b(20);
	add(a,b);
}

