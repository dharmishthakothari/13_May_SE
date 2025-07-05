#include<iostream>
#include<string>
using namespace std;
class Employee
{
	int salary;
	public:
		string name;
		int c_no;
		void setSalary(int sal)
		{
			salary=sal;
		}
		int getSalary()
		{
			return salary;
		}
		void display()
		{
			cout<<"Name "<<name<<" Contact  "<<c_no<<endl;
		}
};
int main()
{
	Employee e;
	e.name="Emp1 ";
	e.c_no=12345;
	e.display();
	e.setSalary(120000);
	cout<<e.getSalary();
}
