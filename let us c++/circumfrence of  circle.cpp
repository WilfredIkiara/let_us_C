#include <iostream>

int main(){
  double pi = 3.14, circumfrence;
  //changing pi to PI makes it a contsant
  int radius;

  std::cout<<"enter the radius of the circle";
  std::cin>>radius;

  circumfrence = 2 * pi * radius;

  std::cout<< circumfrence<<"cm";
  return 0;
}
/* to create constants use the upercases when writing the name of the variable*/
//changing pi to PI makes it a contsant
