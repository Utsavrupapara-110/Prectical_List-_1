#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	cout<<"enter elementin array::";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter number is negative:";
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i]<<endl;
		}
	}

	return 0;	
}
