#include<iostream>
#include<string>
using namespace std;
int num=1000;
int inc_10()
{
	int y;
	num+=200;
	cout<<num;
	return 0;
}
int main()
{
	int x=10;
	cout<<"Before change in number "<<num;
	inc_10();
	cout<<"After change in number "<<num;
	
}
