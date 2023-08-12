# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter num:1-> ";
  cin >> num1;
  cout << "Enter  num:2 >";
  cin>>num2;

  switch(op) 
  {

    case '+':
      cout<<num1<<"+"<<num2<<"="<<num1+num2;
      break;

    case '-':
      cout<<num1<<"-"<<num2<<"="<<num1-num2;
      break;

    case '*':
      cout<<num1<<"*"<<num2<<"="<<num1*num2;
      break;

    case '/':
      cout<<num1<<"/"<<num2<<"="<<num1/num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}

