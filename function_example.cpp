#include<iostream>
using namespace std;
int add(int a=100,int b=10)
{
	return a+b;	
}
void display(string name="User1",int age)
{
	cout<<name<<"\t"<<age;
}
int main()
{
	cout<<add(12);
	cout<<add(12,200);
	cout<<add();
	display("User1",22);
	
}
