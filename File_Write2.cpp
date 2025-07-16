#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outFile("first.txt",ios::app);
	string data;
	
	while(data!="BYE")
	{
		cout<<"Enter data ";
		cin>>data;
		outFile<<data;
	}
	cout<<"Data Written Successfully";
}
