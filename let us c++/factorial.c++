#include <iostream>

using namespace std;
int main(){
  int n;
  long double factorial = 1.0;

  std :: cout<<"enter a positive integer";
  std :: cin>>n;
  if(n<0)
    cout<<"Error! factorial of a negative number doesn't exist";

  else {
  for (int i =1;i<=n;++i){
    factorial *= i;
  }
  std::cout <<"factorial of"<<n<<"="<<factorial;
  }
  return 0;
}