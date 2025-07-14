#include<iostream>
using namespace std;
class A
{
	static int data;
	public:
		static void display()
		{
			cout<<"in display"<<data<<endl;
		}
};
int A::data=90;
int main()
{
	A a;
	//a.display();
	A::display();
}
