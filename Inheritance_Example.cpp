#include<iostream>
using namespace std;
class Parent
{
	public:
	void greetings()
	{
		cout<<"Good Monring"<<endl;
	}
};
class Child :public Parent
{
	public:
	void bye()
	{
		cout<<"Good Bye"<<endl;
	}
	
 };
int main()
{
	Parent objParent;
	objParent.greetings();
	Child objChild;
	objChild.greetings();
	objChild.bye();
	objParent.
	
	
	
}
