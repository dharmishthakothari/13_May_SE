#include<iostream>
using namespace std;
class Point
{
	public :
		int x,y;
	
		Point(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void display()
		{
			cout<<x<<" : "<<y<<endl;
		}
		Point operator++()
		{
			return Point(this->x++,this->y++);
		}
		Point operator++(int)
		{
			Point p2(0,0);
			p2.x=x++;
			p2.y=y++;
			return p2;
		}
		Point operator-(Point other)
		{
//			Point p3(0,0);
//			p3.x=x-other.x;
//			p3.y=y-other.y;
//			return p3;
			return Point(this->x-other.x,this->y-other.y);
		}	
};
int main()
{
	int x,x1,y,y1;
	cout<<"Enter x and y cordinate for Point 1 ";
	cin>>x>>y;
	cout<<"Enter x and y cordinate for Point 2 ";
	cin>>x1>>y1;
	
	Point p1(x,y),p2(x1,y1),p3(0,0);
	
	p3=p1-p2;
	p3.display();
	++p1;
	cout<<"Output of ++ "<<endl;
	p1.display();
	p2++;
	cout<<"Output of ++ "<<endl;
	p2.display();
}
