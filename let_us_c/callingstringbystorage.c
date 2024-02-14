#include <stdio.h>

main(){
  char name[]="WILFRED";
  char *ptr;
  ptr = name;/*store base adress of string*/

  while(*ptr != '\0'){
    printf("%c", *ptr);
    ptr++;
  }
}