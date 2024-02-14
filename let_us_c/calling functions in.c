#include <stdio.h>
// sums up values in  and b
void sum(a,b,c){
  c = a+b;
  printf("\n%d c", c);
}

int main(){
  int a,b,c;
  printf("enter two numbers\n");
  scanf("%d %d",&a,&b);
  printf("%d a, %d b", a, b);
  sum(a,b);
  return 0;
}