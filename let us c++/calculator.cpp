#include <iostream>
#include <math.h>
using namespace std;
int main(){
  char sign;
  double num1, num2;

  cout<< "Enter the first number";
  cin>>num1;
  cout<< "Enter the first number";
  cin>>num2;
  cout<<"Enter an opeational value, +, - , * , /";
  cin>>sign;
  //simple calculator uses the first four rules
  
  switch(sign){
    case '+':
      cout<< num1 +num2;
      break;
    case '-':
      cout<<num1-num2;
      break;
    case '*':
      cout<< num1*num2;
      break;
    case '/':
      cout<<num1/num2;
      break;
    default:
      cout<< "Enter the correct type of operation";
    }
}