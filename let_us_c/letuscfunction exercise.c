#include <stdio.h>
//this program throes atround valus a b  and c to x y z and then does the calculation in the function calsum
int main(){
  int a,b,c, sum;

  printf("\nEnter any three numbers");
  scanf("%d %d %d",&a,&b,&c);

  sum = calsum(a,b,c);

  printf("%d",sum);
  return 0;
}
calsum(x,y,z)
int x,y,z;
{
  int d;

  d = x+y+z;
  return d;
}