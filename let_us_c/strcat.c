#include <stdio.h>

main(){
  char source[]= "folks!";
  char target[30]= "hello";

  strcat(target, source);
  printf("\nsource string = %s", source);
  printf("\ntarget string = %s", target);
  
}