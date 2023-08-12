#include<iostream>
using namespace std;
void c_v(char c);
int main()
{
	char c;
	cout<<"Enter any character:";
	cin>>c;
	
	c_v(c);	
return 0;
}
void c_v(char c)
{
	if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
	{
		cout<<"character "<<c<<" is vowel";	
	}
	else if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	{
		cout<<"character "<<c<<" is vowel";	
	}
	else
	{
		cout<<c<<" is not constant";
	}
}

