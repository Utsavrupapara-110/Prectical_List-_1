#include<iostream>
using namespace std;
void getsum(int n);
int main()
{
	int n;
	cout<<"Enter number:";
	cin>>n;
	getsum(n);
	return 0;
}
void getsum(int n)
{
	int sum=0,i;
	if(n==0)
	{
		cout<<"sum =1";
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
		cout<<"sum is::"<<sum;
	}
}
