#include<iostream>
using namespace std;
class A
{
	int number;
	public :
		A(int number1)
		{
			number=number1;
		}
		friend void display(A a);		
};
void display(A a)
{
	cout<<a.number;
}
int main()
{
	A a(12);
	display(a);
	
}

