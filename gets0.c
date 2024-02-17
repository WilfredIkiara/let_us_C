/*
gets() recieves a string from thr kryboard 
*/
#include <stdio.h>

main(){
  char name[50];
  
  printf("\n Enter name");
  scanf("%s", name);
  printf("%s",name);

  /*the code above does not allow multi word entrie scanf(assume a blank ( space))is the end of the input*/
  //to ssolve this we use gets(); which takes the value typed is terminatted when the eneter key is pressed 
  /*gets() sees the character \n and changes it to  \0 ; the puts() does the opposite*/

  char footballer[40];

  puts("Enter your full name");
  gets(footballer);/*sends the base adress of the array*/
  puts("happy footballing");
  //puts can output only one thing st a time so we used two puts
  puts(footballer);


}