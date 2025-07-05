#include<iostream>
#include<string>
using namespace std;
class Person
{
	public:
	//data
	int c_no;
	string name;
	int age;
	//function
	int calculateArea()
	{
		return len*width
	}
	void display()
	{
		cout<<name<<"\t"<<age<<"\t"<<c_no;
	}
};

int main()
{
	Person p;
	p.name="Yash";
	p.age=20;
	p.c_no=1234;
	p.display();
	
	Person p1;
	p1.name="sdfsdf";
	p1.age=23;
	p1.c_no=4567;
	p1.display();
	
	cout<<"Hello World!!!";
}
