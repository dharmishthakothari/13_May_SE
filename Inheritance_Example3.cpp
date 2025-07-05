#include<iostream>
using namespace std;
class Shape{
	public:
		
	void findArea()
	{
		cout<<"In Shape class";
	}
};
class Rectangle:public Shape
{
	public:
	int length,width;
	Rectangle(int length,int width)
	{
		//cout<<length<<"\t"<<width<<endl;
//		length1=length;
//		width1=width;
	this->length=length;
	this->width=width;
	}
	void findArea()
	{
		Shape::findArea();
		int area;	
		area=length*width;
		cout<<"Area "<<area;
	}
};
int main()
{
	int length,width;
	cout<<"Enter length and width";
	cin>>length>>width;
	Rectangle objRec(length,width);
	objRec.findArea();
	//Rectagle objRec1(20,23);
	
}
