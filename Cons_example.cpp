#include<iostream>
#include<string>
using namespace std;
class Person
{
	public:
	Person()
	{
		cout<<"Good Morning in Constructor";
	}
	Person(string msg)
	{
		cout<<msg;
	}
	
	void display()
	{
		cout<<"In display";
	}
};
int main()
{
	Person p1;
	Person p("Welcome ");
	
}
	
