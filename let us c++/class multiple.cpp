#include <iostream>
using namespace std;
//base class
class myClass{
  public:
    void myFunction(){
      cout<<"some content in parent class\n";
    }
};
//another base class

class myOtherClass{
  public:
  void myOtherFunction(){
    cout<<"some comment on another class\n";
  }
};

//derived class
class MyChildClass: public myClass, public myOtherClass{

};

int main(){
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}