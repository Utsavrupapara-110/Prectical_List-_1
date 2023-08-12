#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter A number:";
	cin>>a;
	
	cout<<"Enter B number:";
	cin>>b;
	
	cout<<"Enter C number:";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"this number  A  is big:";
	}
	else if(b>a && b>c)
	{
		cout<<"this number  b  is big:";
	}
	else
	{
		cout<<"this number  c  is big:";
	}
	
	return 0;
}
