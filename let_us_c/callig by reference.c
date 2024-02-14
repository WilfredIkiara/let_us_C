#include <stdio.h>

int main(){
  int a = 10, b = 20;
  stch(&a,&b);
  printf("a = %d,b = %d", a, b);
}
/*stch(int x, int y){
  int z;
  //this code interchanges the values of x to be b and y to be a
  z = x;
  x = y;
  y = z;

  printf("x = %d, y = %d", x, y);
}*/
stch(int *x, int *y){
  int z;
  //this code uses pointers to interchange the values in a and b
  z = *x;
  *x = *y;
  *y = z;

  printf("x = %d, y = %d", *x, *y);
}