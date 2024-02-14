#include <stdio.h>
//compares the string character by character

main(){
  char string1[]="Jerry";
  char string2[] ="Ferry";

  int i , j ,k;

  i = strcmp(string1, "jerry");
  j = strcmp(string1, string2);
  k = strcmp(string1, "jerry boy");

  printf("%d %d %d" ,i, j, k);

}
//this code does not work the ways its supposed to output
//its supposed to output a -32 somewhere there a blank(space)