#include <iostream>
using namespace std;
int main(){
  int num;
  std::cout<<"enter a number";
  std::cin>>num;
  if(num%2 == 0){
    std::cout<<"it is even number";
  }
  else
    std::cout<<"it is an odd number";

  return 0;
}
