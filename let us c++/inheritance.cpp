#include <iostream>
using namespace std;
class Chef {
  public:
    void makeChiken(){
      cout<<"The chef makes chiken";
    }
    void makeSalad(){
      cout<<"The chef makes salad";
    }
    void makeSpecial(){
      cout<<"the chef makes a special dish";
    }
};
//the italian chef inherits the chefs skills
class italianChef: public Chef{
  public:
    void makePasta(){
      cout<<"The chef makes pasta";
    }
    void makeSpecial(){
      cout<<"the chef makes a chicken palm";
    }//overides the mai chef's make special
  
};
int main(){
  Chef Chef;
  Chef.makeChiken();
  italianChef italianChef;
  italianChef.makeChiken();
  return 0;
}