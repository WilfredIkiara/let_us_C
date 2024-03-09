#include <iostream>
#include <math.h>
using namespace std;

double cubed(double number){
  for (int i = 0; i<=1; i++){
    number = number * number;
  }
  return number;
}
int main(){
  double number;
  cout<<"Enter the value you want to cube \n";
  cin>>number;
  cout<<cubed( number);
  return 0;
}  