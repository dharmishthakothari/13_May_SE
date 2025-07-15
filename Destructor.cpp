#include<iostream>
#include<cstdlib>
using namespace std;
class Arithmatic
{
	public:
	int num1,num2;
	//constructor 2 paramters 
	Arithmatic(int num1,int num2)
	{
		this->num1=num1;
		this->num2=num2;
	}
	
	~Arithmatic()
	{
		cout<<"Desstructor";
	}
	void add()
	{
		cout<<num1+num2<<endl;
	}	
};
int main()
{
	//Object creatation
	Arithmatic a(12,23);
	//a object
	a.add();
	Arithmatic a1(12,23);
	Arithmatic a2(12,23);
	Arithmatic a3(12,23);
	
}
