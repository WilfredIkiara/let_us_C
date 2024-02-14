#include <stdio.h>

int main(){
  int ary[]={10, 20, 30, 45,67,56, 74};
  int *i, *j, x;

  i=&ary[1];
  j=&ary[2];
  //x = j - i; does not work bad idea it prints the differennce between the locations they are held in which is depending on the number of bytes apart they are
  x = *j -*i;
  printf("%d", x);

}