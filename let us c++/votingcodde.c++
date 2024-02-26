#include <iostream>

using namespace std;
int main(){
  int age;
  string country;
  cout<<"enter your age ";
  cin>> age;
  cout<<"Enter the country you are from ";
  cin>>country;
  if(age >= 18)
    if (country == "kenya")
      cout<<"you are eliginle to vote";
    else{
      cout<<"you are not able to vote you are not kenyan";
    }
  else{
    cout<<"you are not able to vote you are below 18 years of age";
    }
  
return 0;


}