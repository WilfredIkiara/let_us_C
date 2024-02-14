#include <stdio.h>
int main(){
  #ifdef OKAY
    statement 1;
    statement 2; /*detects virus*/
    statement 3;
    statement 4;/*specific to stone virus*/

    #endif

    statement 5;
    statement 6;
    statemnts 7;
}

main2(){
  #ifdef INTEL
    code suitable for a intel PC/*somehow the above code displays only the code needed to run in a particular pc model and switchs up when*/
  #else 
    //code suitable for a motorola PC
  #endif
  //code common to both the computers
  //#ifdef  is used to make programs portable
}