#include<iostream>
using namespace std;
class Employee
{
	int eid;
	static int count;
	string name,address;
	public :
		Employee(int eid,string name,string address)
		{
			count++;
			this->eid=eid;
			this->name=name;
			this->address=address;
		}
		void display()
		{
			cout<<count<<"\t"<<this->eid<<"\t"<<this->name<<"\t"<<this->address<<endl;
		}
};
int Employee::count=0;
int main()
{
	Employee e1(12,"Emp1 ","Parimal");
	e1.display();
	Employee e2(13,"Emp2 ","C G Road");
	e2.display();
	Employee e3(14,"Emp3 ","Naherunagar");
	e3.display();
	Employee e4(15,"Emp4 ","Nikol");
	e4.display();
	Employee e5(16,"Emp6","Nikol");
	e5.display();
	Employee e6(189,"Emp9 ","Nikol");
	e6.display();
}
