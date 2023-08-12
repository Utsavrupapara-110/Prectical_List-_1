#include <iostream>
using namespace std;
int fibo(int n);
int main()
{
	int n,i;
	cout<<"Enter any number to find fibonacci series:";
	cin>>n;
	cout<<"fibonacci Series is";

	while (i<n)
	{
		cout<<"\t"<< fibo(i);
		i++;
	}
	return 0;
}

int fibo(int n)
{
	if((n==1)||(n==0))
	{
		return (n);
	}
	else
	{
		return(fibo(n-1)+fibo(n-2));
	}
}
