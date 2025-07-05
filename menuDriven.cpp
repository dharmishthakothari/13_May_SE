#include<iostream>
using namespace std;
int main()
{
	int num1,num2,choice;
	cout<<"Enter number1 ";
	cin>>num1;
	cout<<"Enter number2 ";
	cin>>num2;
	bool temp=true;
	while(temp){
	
	cout<<"1. Addition"<<endl;
	cout<<"2. Substraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"Please enter your choice ";
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"Addition is = "<<num1+num2<<endl;
				break;
		case 2:cout<<"Substraction is = "<<num1-num2<<endl;
				break;
		case 3:cout<<"Multilication is = "<<num1*num2<<endl;
				break;
		case 4:cout<<"Divition is = "<<num1/num2<<endl;
				break;
		case 5:temp=false;
				break;
		default : cout<<"Enter valid choice "<<endl;
	}
	
}
}
