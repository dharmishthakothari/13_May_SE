#include<iostream>
using namespace std;
class A
{
	public:
	static int i;
	void display()
	{
		i++;
		cout<<i<<endl;
	}	
};
int A::i=0;
int main()
{
	A a;
	a.display();
	A a1,a2,a3;
	a1.display();
	a3.display();
}
