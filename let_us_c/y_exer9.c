#include <stdio.h>
//checks whether the number is a even or an odd number
int main(){
  int a;
  printf("enter the number to be cheked");
  scanf("%d", &a);

  if (a % 2 == 0 ){
    printf("This is an even number");
  }
  else
    printf("This is an odd number");
  return 0;
}