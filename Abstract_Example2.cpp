#include<iostream>
using namespace std;
class Shape
{
	public:
		void greet()
		{
			cout<<"Hello ";
		}
		virtual double calculateArea()=0;
};
class Circle:public Shape
{
	public:
	double calculateArea()
	{
		return 3.14*3*3;
	}
};
class Square:public Shape
{
	public:
	double calculateArea()
	{
		return 5*2;	
	}
};
int main()
{
	//Shape s;
	Circle cir;
	cir.greet();
	cout<<"Area od Circle "<<cir.calculateArea();
	Square sq;
	cout<<"Area of Square "<<sq.calculateArea();
	
}

