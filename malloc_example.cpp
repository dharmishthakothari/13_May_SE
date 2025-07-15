#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int *a,no_of_elements;
	cout<<"Enter no_of_elements ";
	cin>>no_of_elements;
	//a=(int*)malloc(no_of_elements*sizeof(int));
	a=(int*)calloc(no_of_elements,sizeof(int));
	for(int i=0;i<no_of_elements;i++)
	{
		a[i]=10*i;		
	}
	for(int i=0;i<no_of_elements;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
