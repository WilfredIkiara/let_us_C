#include <iostream>
//code checks the grade of students when students enter their score
int main(){
  int num;
  std::cout<<"enter a number to check grade";
  std::cin>>num;

  char grade;
    switch(num){
      case 0 ... 39:
        std::cout<<"Grade E";
        break;
      case 40 ... 56:
        std::cout<<"Grade D";
        break;
      case 57 ... 67:
        std::cout<<"Grade C";
        break;
      case 68 ... 79:
        std::cout<<"Grade B";
        break;
      case 80 ... 89:
        std::cout<<"Grade A";
        break;
      case 90 ... 100:
        std::cout<<"Grade A+";
        break;
    }
    return 0;
}