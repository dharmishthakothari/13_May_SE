#include<iostream>
#include<string>
#include<bitset>
using namespace std;
int main()
{
	int a=5,b=2;
	bitset<8> a1(a);
	bitset<32> ansOr(a|b);
	cout<<a1<<endl;
	//cout<<(a&b);
	cout<<ansOr;
	
}
