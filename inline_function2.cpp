#include<iostream>
using namespace std;
class Employee
{
	string name;
	int eid;
	double salary;
	public:
	Employee(int eid1,string name1,double salary1)
	{
		//references to current object
		eid=eid1;
		name=name1;
		salary=salary1;
//		this->eid=eid;
//		this->name=name	;
//		this->salary=salary;
		
	}
	inline void show()
	{
		cout<<eid<<"\t"<<name<<"\t"<<salary<<endl;
	}
};
int main()
{
	Employee e1(12,"weryy",234567);
	e1.show();
}
