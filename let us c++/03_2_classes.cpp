#include <iostream>
using namespace std;
//base class
class vehicle{
  public:
    vehicle(){
      cout<<"This is a vehicle\n";
    }
};
//base class
class fare{
  public:
    fare(){cout<<"Fare of vehicle is :\n";}
};
//first sub class
class car:public vehicle{};
//second sub class
class bus:public vehicle, public fare{};
//main function
int main(){
  //creating object of sub class will
  //invoke the constructor of base class
  bus obj2;
  return 0;
}