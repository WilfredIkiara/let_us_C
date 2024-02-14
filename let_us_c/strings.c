//what are strings .....in one definition they are an array of characters.
//the string is terminated by a null('\0')
/*
for example 
char name []={'H','A','E','S','L','E','R','\0'};
*/
#include <stdio.h>
//the code below prints my name
main(){
  char name[]="Wilfred";
  int i = 0;

  while (i<=7){
    printf("%c",name[i]);
    i++;
  }
}

