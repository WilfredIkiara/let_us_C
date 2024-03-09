#include <iostream>

int main(){

  int x;//declaration
  x = 5;//assignment
  int y =6;
  std::cout<<y<<'\n';

  std::cout<<x<<'\n';
  //std__stadad output
  /*when a double is asigned to an int variable and the integer value is prinnted by cout he number is truncated.....if its 5.9, the value seen will be 5 */

  //to print a number with a decmal use a double
  double price = 10.99;
  double gpa = 3.7;
  double temperature = 25.1;

  std::cout<<temperature<<std::endl; 
  //char can only store a single character
  char grade = 'A';
  char initial = 'B';

  std::cout<< initial;

  //boolean (true or false)
  bool student = false;
  bool power = true;
  bool forSale = false;

  //string (multiple characters)

  std::string name = "WILFRED";
  std::cout<<name<<std::endl;

  return 0;
}