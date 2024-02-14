#include <iostream>
using namespace std;
//the program below uses two functions to check if a year is a keao year or not
main(){
  int year;
  for(int i = 0 ;i<=5;i++){
  cout<<"\nenter the Year";
  cin>>year;

    if (year %4 ==0 && year %400 == 0)
      int leap(year);
    else 
      cout<<year<<" is not a leap year";
  }
}

  int leap(int year){
    if(year %100 == 1)
      cout<<year<< "is a leap year";
    else 
      cout<<year<<" is not a leap year";
  
}
