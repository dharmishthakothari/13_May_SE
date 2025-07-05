#include<iostream>
using namespace std;
int main()
{
	int start_year,end_year;
	cout<<"Enter starting year and End Year ";
	cin>>start_year>>end_year;
	for(int i=start_year;i<=end_year;i++)
	{
		if(i%4==0 || i%400==0)
		{
			cout<<i<<endl;
		}
//		else
//			cout<<year<<" not is leap year ";
	}
}
