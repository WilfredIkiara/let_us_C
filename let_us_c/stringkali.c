#include <stdio.h>
//the program below writes your name
//it uses the terminal value \0 :]

main(){
  char name[]="WILFRED";
  int i=0;
  
  while(name[i] != '\0'){
    printf("%c",name[i]);
    i++;
  }
}