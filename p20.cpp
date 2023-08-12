#include <iostream>
using namespace std;
void arm(int n);

int main()
{
	int n;
	cout<<"Enter any number to cheak number is armstrong or not:";
	cin>>n;
	
	arm(n);
	return 0;
}
void arm(int n)
{
	int rem,temp=n,p;
	while(n>0) 
	{
		rem=n%10;
		p=(p)+(rem*rem*rem);
		n=n/10;
	}
	if(temp==p) 
	{
		cout << ("Yes:) It is Armstrong Number");
	}
	else 
	{
		cout<<("No:( It is not an Armstrong Number");
	}
}
