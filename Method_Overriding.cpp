#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual void msg()
	{
		cout<<"In Shape class "<<endl;
	}
};
class Rectangle : public Shape
{
	public:
	void msg  ()
	{
		cout<<"in Rectangle class "<<endl;
	}
};
class Circle : public Shape
{
	public :
		void msg()
		{
			cout<<"inb Circle class "<<endl;
		}
};
int main()
{
	Shape *s;
	Rectangle r;
	Circle c;
	s=&r;
	
	s->msg();
	r.msg();
	s=&c;
	s->msg();
	c.msg();
	
}
