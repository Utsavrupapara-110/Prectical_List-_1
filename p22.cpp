#include <iostream>
using namespace std;

int main() 
{
    int expo;
    float base,result=1;

    cout<<"Enter base :";
    cin>>base;
    
    cout<<"Enter Exponent";
    cin>>expo;

    cout<<base<<"^"<<expo<<"=";

    while (expo != 0) 
	{
        result *= base;
        expo--;
    }

    cout << result;
    
    return 0;
}
