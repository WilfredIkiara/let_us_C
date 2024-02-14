#include <stdio.h>
//checks if the nuber entered is an even or an odd number
int main(){
  int n;

  printf("input a number");
  scanf("%d", &n);
  printf("%d\n",n);

  if( n % 2 == 0){
    printf("even number");
  }
  else
    printf("odd number");
  return 0;
}