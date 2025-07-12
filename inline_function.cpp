#include<iostream>
using namespace std;
inline void display()
{
	cout<<"This is inline without class"<<endl;
}

class A
{
	public:
		inline void display()
		{
			cout<<"It is my inline function ";
		}
};

int main()
{
	A obj;
	obj.display();
	display();
}
