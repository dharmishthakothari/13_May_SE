#include<iostream>
using namespace std;
int num=200;
class Shape
{
	
	public :
		int num=100;
		void display();
		
		void displayNumber()
		{
			cout<<::num<<endl;
		}
		
};
class Rectangle
{
	public:
		void display();
		
};
void Rectangle::display()
{
	
}
void Shape::display()
{
	cout<<"in display ";
}
int main()
{
	Shape s;
	s.display();
	s.displayNumber();
}
