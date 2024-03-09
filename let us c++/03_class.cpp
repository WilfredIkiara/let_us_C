//multilevel inheritance
#include <iostream>
using namespace std;
//Base class
class Vehicle{
  public:
  Vehicle(){std::cout<<"This is a vehicle :\n";}
};
//first sub_class derived from class vehicle
class fourWheeler: public Vehicle{
  public:
  fourWheeler()
{
  std::cout<<"Object with 4 wheels are vehicles :\n";
}
};
//sub class derived from the derived base class fourWheeler
class Car: public fourWheeler{
  public:
  Car(){std::cout<<"Car has 4 Wheels :\n";}
};
//main function
int main(){
  //Creating object of sub class will
  //invoke the constructor of base classes
  Car Obj;
  return 0;
}