#include <iostream>

using namespace std;

//the code below swaps the value of the two variables a and b
int main(){
  int a=5,b=10, temp;
  cout<<"before swapping"<<endl;
  cout<<"\na="<<a<<"\nb="<< b <<endl;
  temp = a;
  a = b;
  b = temp;
  cout<<"\na="<<a<<"\nb="<<b <<endl;
  return 0;
}