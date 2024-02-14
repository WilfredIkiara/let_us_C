#include <stdio.h>

main(){
  char name[25];/*this array declaration 
  sets aside 25 bytes under the array 
  name
*/
  printf("Enter your name ");
  scanf("%s", name);
  printf("Hello %s", name);
}