#include <iostream>
using namespace std;

  struct person{
    char name[50];
    int age;
    float salary;
  };

int main(){
  person p1;

  cout<<"Enter the full name";
  cin.get(p1.name, 50);
  cout<<"Enter age";
  cin>>p1.age;
  cout<<"Enter your salary";
  cin>>p1.salary;
  cout<<"\nDisplaying information";
  cout<<"Name"<<p1.name;
  cout<<"Age"<<p1.age;
  cout<<"salary"<<p1.salary;
  return 0;
  }
