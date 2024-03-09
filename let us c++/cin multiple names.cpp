#include <iostream>
using namespace std;

int main(){
  string name;
  int age;
  //the code below works as long as we do not bring the second(age) cin before the getline becausse, in the buffer there is a newline chracter found after the cin....to prevent this we can add >>std::ws after the getline function is called
  std::cout<<"what is your name"<<'\n';
  //cin>>name;
  std::getline(std::cin/*>>std::ws*/, name);

  std::cout<<"what is your age";
  std::cin>>age;

  std::cout<<"Hello"<<name<<'\n';
  std::cout<<"you are"<<age<<"years old";

return 0;
}