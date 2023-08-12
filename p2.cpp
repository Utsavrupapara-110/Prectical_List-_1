#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter number a:";
	cin>>a;
	
	cout<<"Enter number b:";
	cin>>b;
	int sum=a+b;
	int multi=a*b;
	int subst=a-b;
	float divi=a/b;
	float per=a%b;
	
	cout<<"sum is:"<<sum<<endl;
	cout<<"multiply is:" <<multi<<endl;
	cout<<"sub:" <<subst<<endl;
	cout<<"division is:" <<divi<<endl;
	cout<<"persntage is:"<<per<<endl;
	return 0;
}
