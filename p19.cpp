#include <iostream>
using namespace std;
void isprime(int n);

int main()
{
	int n;
	cout<<"Enter number to cheack number is prime or not prime:";
	cin>>n;
	
	isprime(n);
	return 0;
}
void isprime(int n)
{
	int i=2;
	if(n<=1)
	{
		cout<<"number is 0 or 1:)";
	}
	else
	{
		while(i<=n/2)
		{
			if (n%i==0)
			{
				cout<<"number is not prime:)"<<"\n";
				break;
			}
			else
			{
				cout<<"number is prime:)"<<"\n";
			}
			i++;
		}
	}
		
}
