#include <iostream>
#include <math.h>
using namespace std;
int main(){

  string secetname = "Password";
  string guess;
  int guess_limit = 3, guess_count= 0;
  bool outofguesses = false;

  while(guess != "Password"&& !outofguesses)
  if (guess_count < guess_limit){
    std::cout<<"Enter a guess: \n";
    cin>>guess;
    guess_count++;}
  else{
    outofguesses =true;
    std::cout<<"You lose ~()~ \n";
  }
  if(outofguesses)
    std::cout<<"You looser ~()~~()~";
  else
    std::cout<<"!!You WIN!!";
  
  
}