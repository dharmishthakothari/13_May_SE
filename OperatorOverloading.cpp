#include<iostream>
using namespace std;
class Distance
{
	public:
		int feet,inches;
		void getData()
		{
			cout<<"Enter feet and inces ";
			cin>>feet>>inches;
		}
		void display()
		{
			cout<<feet<<" : "<<inches<<endl;
		}
		Distance operator +(Distance d)
		{
			Distance ans;
			ans.feet=feet+d.feet;
			cout<<" feet "<<feet<<" d.feet "<<d.feet<<" ans "<<ans.feet<<endl;
			ans.inches=inches+d.inches;
			return ans;
		}
				
};
int main()
{
	Distance d1,d2,d3;
	d1.getData();
	d1.display();
	d2.getData();
	d2.display();
	d3=d1+d2;
	d3.display();
}
