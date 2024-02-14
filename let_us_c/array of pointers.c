#include <stdio.h>
//the program below declares array pointers
int main(){
  int *arr[4];

  int i = 32, j = 73, k = 4,l = 78, m;
  arr[0]= &i;
  arr[1]= &j;
  arr[2]= &k;
  arr[3]= &m;
  for(m=0;m<=3;m++)
  printf("%d", *(arr[m]));
}

