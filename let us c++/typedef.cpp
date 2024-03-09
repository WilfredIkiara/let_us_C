#include <iostream>
#include <vector>
 //typedef has been replaced with using keyword
typedef std::vector<std::pair<std::string, int>>pairlist_t;

typedef std::string text_t;

int main(){
  //instead of writting 
  std::string firstname;
  //you can write
  text_t firstname;

  /*
    typedef - resereved keyword used to create an additional name(alias) for an existing type helps with readability and reduces typos
  */
 //typedef has been replaced with using keyword
 pairlist_t pairlist;

 return 0;
}