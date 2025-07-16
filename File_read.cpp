#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inFile("first.txt");
	string data;
//	inFile>>data;
//	cout<<data;
	getline(inFile,data);
	cout<<data;
	
}
