#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inFile("FriendClass12213.cpp");
	if(inFile.is_open())
	{
		cout<<"File is thr";
	}
	else
	{
		cout<<"Check the file name ";
	}
	string data;
	inFile>>data;
	

//	inFile>>data;
//	cout<<data;
}
