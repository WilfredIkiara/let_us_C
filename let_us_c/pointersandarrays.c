#include <stdio.h>

int main(){
  int i = 3, *x;
  float j = 1.5, *y;
  char k = 'c', *z;

  printf("\n value of i = %d", i);
  printf("\nValue of j = %f", j);
  printf("\n Value of k = %c", k);
  x = &i;
  y = &j;
  z = &k;
  printf("\nOriginal adress in x = %u", x);
  printf("\nOriginal adress in y = %u", y);
  printf("\nOriginal adress in z = %u", z);
  x++;
  y++;
  z++;
  printf("\nNew adress in x = %u", x);
  printf("\nNew adress in y = %u", y);
  printf("\nNew adress in z = %u", z);
}