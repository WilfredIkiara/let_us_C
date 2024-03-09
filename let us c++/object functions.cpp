#include <iostream>
using namespace std;

class student {
  public:
    string name;
    string major;
    double gpa;
    student(string aName, string aMajor, double agpa){
      name = aName;
      major = aMajor;
      gpa = agpa;
    }
    bool has_honors(){
      if(gpa >= 3.5){
        return true;
      }
      else 
        return false;
    }
};
int main(){
  student student1("Jim","Busines", 2.4);
  student student2("Ian ","Art", 3.6);
  cout<<student1.has_honors();
  return 0;
}