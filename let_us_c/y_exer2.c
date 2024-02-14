#include <stdio.h>
int main(){
  int a, b, c, min;

  printf("enter A\n");
  scanf("%d",&a);
  printf("enter B\n");
  scanf("%d",&b);
  printf("enter C\n");
  scanf("%d",&c);

  if(a<b&&a<c&&a<min)
    min = a;
  
  else if(c<a && c<min&&c<b)
    min =c;
  
  else if(b<a && b<min&&b<c)
    min = b;
  printf("%d min\n%d a\n%d b\n %d c" ,min, a,b,c);
  return 0;
}