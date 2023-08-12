#include <iostream>
using namespace std ;
void cp(int num); 
int main()
{
     int num;
     cout<<"Enter number";
     cin>>num;
     cp(num);
     return 0;
}
void cp(int num)
{
	int rev=0,temp,n;
	while(num>0)
	{
		temp=num % 10;
		rev=(rev * 10)+ temp;
		num=num/10;
	};
	cout << " The reverse of the number is: " << rev << endl;
	if(num==rev)
	{
		cout<<"The number is a palindrome";
	}
	else
	{
		cout<<"The number is a not palindrome";
	}
}
