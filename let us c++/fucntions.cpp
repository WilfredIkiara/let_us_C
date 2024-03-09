#include <iostream>
#include <math.h>
using namespace std;
//if you put te function below the main function you just have to declare it first for the compiler too know that the function exists somewhere in the code even after the main function
void say_hi(string name, int time, char gender){
if(gender == 'M'){
  if (time < 12)
    cout<< "Good morning Mr."<< name; 
  else
    cout<<"Good evening Mr."<< name;
}
else{
  if (time < 12)
    cout<< "Good morning Madam."<< name; 
  else
    cout<<"Good evening Maadam"<< name;
}
}

int main(){
  double time;
  string name;
  char gender;
  cout<< "What is your name: \n";
  getline(cin, name);

  cout<<"What time of the day is it in 24 hour clock system\n";
  cin>> time;

  cout<<"what is your gender: Male = M female = F";
  cin>>gender;

  say_hi(name , time, gender);
  return 0;
}