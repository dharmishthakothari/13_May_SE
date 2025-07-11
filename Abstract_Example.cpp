#include<iostream>
using namespace std;
class Bank
{
	public:
	virtual	int calculateInterest()=0;
		
};
class SBI : public Bank
{
	public:
	int calculateInterest()
	{
		return 1000;
	}
};
class ICICI:public Bank
{
	
};
int main()
{
	//Bank bank;
	//cout<<"From bank  "<<bank.calculateInterest()<<endl;
	SBI s;
	int interest;
	interest=s.calculateInterest();
	cout<<"From SBI "<<interest<<endl;
	
	
}
