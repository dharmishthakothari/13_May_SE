#include<iostream>
using namespace std;
class GrandParent
{
	public :
	void greeting()
	{
		cout<<"In GP Good Morning";
	}		
	
};
class Parent:public GrandParent
{
	
};
class Child :public Parent
{
	
};
int main()
{
	Child objChild;
	objChild.greeting();
}
