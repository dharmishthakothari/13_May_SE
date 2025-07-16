#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outFile("first.txt");
	outFile<<"This is new File";
	cout<<"Data Written Successfully";
}
