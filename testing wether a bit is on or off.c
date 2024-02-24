#include <stdio.h>
/*To test if a bit is on or off*/
int main(){
  int i = 65, j;

  printf("\n Value of i = %d", i);
  j = i&32;

  if(j==0)
    printf("\n and its fifth bit is off");
  else
    printf("\n and its fifth bit is on");
  
  j = i&64;

  if(j==0)
    printf("\n and its sixth bit is off");
  else
    printf("\n and its sixth bit is on");
      
}