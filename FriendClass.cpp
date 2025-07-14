#include<iostream>
using namespace std;
class B;
class A
{
	int data;
	public:
		void display()
		{
			data=200;
			cout<<data<<endl;
		}
		friend class B;
};
class B
{
	public:
		void display(A a)
		{
			cout<<a.data<<endl;
		}
};
int main()
{
	A a;	
	a.display();
	B b;
	b.display(a);
}
