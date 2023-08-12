#include<iostream>
using namespace std;
int main()
{
	float p,r,t,s_i;
	cout<<"Enter principal amoount:";
	cin>>p;
	
	cout<<"Enter time:";
	cin>>r;
	
	cout<<"Enter interest:";
	cin>>t;
	
	s_i= (p*t*r)/100;
	
	cout<<"Simple Interest::"<<s_i;

	return 0;
}

