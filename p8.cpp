#include<iostream>
using namespace std;
int main()
{
	int a,b,temp=0;
	cout<<"Enter 1st number";
	cin>>a;
	cout<<"Enter 2nd number";
	cin>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"after swaping a=: "<<a<<endl;
	cout<<"after swaping b=: "<<b<<endl;
	return 0;
}
