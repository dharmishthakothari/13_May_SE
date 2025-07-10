#include<iostream>
using namespace std;
class Number
{
	public:
	int num;
	Number()
	{
		num=0;
	}
	Number(int num)
	{
		this->num=num;
	}
	bool operator>=(Number other)
	{
		
		if(num>=other.num)
		{
			return true;
		}
		else
			return false;
		
	}
	Number operator++()
	{
		Number ans;
		ans.num=++num;
		return ans;
	}
	Number operator++(int)
	{
		Number ans;
		ans.num=num++;
		return ans;
	}
	
};



int main()
{
	Number n1(200);
	Number n2(30);
	bool ans;
	ans=n1>=n2;
	if(ans)
	{
		cout<<"True";
	}
	else
		cout<<"False";
	
	Number n3(12);
	Number ansNumber;
	//ansNumber=++n3;
	ansNumber=n3++;
	cout<<ansNumber.num;
	
	
	
	
	
	
}
