#include<iostream>
using namespace std;
int fact(int n);

int main() 
{
  int n;
  cout<<"Enter a number: ";
  cin >>n;

  cout<<"Factorial of "<< n <<"="<<fact(n);

  return 0;
}

int fact(int n)
{
  	if(n > 1)
  	{
    	return n * fact(n - 1);
	}
  	else
  	{
  	  return 1;
	}
}

