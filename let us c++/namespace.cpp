#include <iostream>
 namespace first{
  int x = 1;
 }
 namespace second{
  int x = 2;
 }

int main(){
  //you can also use namespace firrst to call the first namespace vlue of x this is when the namespace is not declared in the variable ;
  //the namespace standard(using namespace std) is not advisable to use becase it contains many naming stiuffs that may bring a naming conflict
  /*
  Namespace = provides a solution for preventing name clonflicts
  in large projects, each entity needs a uniquename
  a namespace allows for identically named entities
  asong as the namespaces are different
  */
 int x =0;

 std::cout<< x;
 std::cout<<first::x;//two collons is kiwn as the scope ersion operator


 // is not allowed 
 return 0;
}