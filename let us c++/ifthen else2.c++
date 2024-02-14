#include <iostream>

using namespace std;
int main(){
  int num;
  std::cout<<"enter a number to check grade";
  std::cin>>num;
    if(num < 0 || num >100 ){
      std::cout<<"wrong number";
    }
    else if(num >= 0&&num <50){
      std::cout<<"Fail";
    }
    else if(num>= 50&&num <60){
      std::cout<<"D grade";
    }
    else if(num>= 60 && num <70){
      std::cout<<"C grade";
    }
    else if(num>= 70&& num < 80){
      std::cout<<"B grade";
    }
    else if(num>=80&&num <90){
      std::cout<<"A grade";
    }
    else if(num >=90&&num<100){
      std::cout<<"A+ grade";
    }

}