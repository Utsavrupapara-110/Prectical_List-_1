#include<iostream>
using namespace std;
int main()
{
	float  r;
	cout<<"Enter radius of given circle:";
	cin>>r;
	
	float dia=r*2;
	float cir=2*3.14*r;
	float area=3.14*r*r;
	
	cout<<"diameter of given circle"<<dia<<endl;
	cout<<"cir of given circle"<<cir<<endl;
	cout<<"area of given circle"<<area<<endl;
	return 0;
}
