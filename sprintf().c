#include <stdio.h>

main(){
  /*
  the sprintf() works the same as printf axcept that it printf its output to an array of characters*/

  int i = 10;
  char ch = 'A';
  float a = 3.14;
  char str[20];

  printf("\n %d %c %f", i, ch, a);
  sprintf(str,"%d %c %f ", i , ch, a);
  printf("%s", str);
}