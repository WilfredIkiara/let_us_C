#include <iostream>
#include <vector>
//the code below explains the using keyword
//the using keyword and the typedef keywords should only be used when there is clear benefits
using text_t = std::string;
using number_t = int;

int main(){
  text_t firstname  = "bro";
  number_t age = 21;

  std::cout<<firstname<<std::endl;
  std::cout<<age<<std::endl;
}
//the modulus operator gives the remainder