// C++ program to find compound interest
// for given values.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	float p,r,t,temp,c_i;
	
	cout<<"Enter principle:";
	cin>>p;
	
	cout<<"Enter rate:";
	cin>>r;
	
	cout<<"Enter time:";
	cin>>t;

	temp=p*((pow((1+r/100),t)));
	c_i =temp-p;

	cout <<"Compound interest is"<<c_i;
	return 0;
}

