#include <iostream>
using namespace std;
/*

*/
int main(){
  int age ={19};
  int *Page = &age;
  double gpa = 2.7;
  double *pgpa=&gpa;
  string name = "Mike";
  /*for(int i = 0; i<= 99;i++){
  cout<<&age<<endl;
  }*/
  cout <<"Age "<< &age;
  cout<<"GPA"<<&gpa;
  cout<<"Name"<<&name;
  cout<<*Page;
  cout<<*&gpa;


  return 0;
}