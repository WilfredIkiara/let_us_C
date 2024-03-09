#include <iostream>
using namespace std;


//base class 

class Vehicle{
  public:
    string brand = "ford ";
    void honk(){
      cout<<"tuuut, tuut!\n";
    }
};
//derive class
class Car:public Vehicle{
  public:
    string model = "Mustang";
};
int main(){
  Car myCar;
  myCar.honk();
  cout<< myCar.brand + "" + myCar.model;
  return 0;
}