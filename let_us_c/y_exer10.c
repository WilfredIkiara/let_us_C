#include <stdio.h>

int main(){
  int i, n;
  float res = 0;

  do{
    printf("enter n: ");
    scanf("%d",&n);
  }while (n<0);

  for (i=1; i<=n;i++){
    res = res + (float) 1/i;
  }
  printf("%d = %f\n", n ,res);
}