#include <stdio.h>
/*
int subs(a,b,c,temp){


printf("\nthe begining of the function above\n ");
numbers(a,b,c);
temp = a;
a = b;
b = c;
c = temp;
  printf("number a = %d",a);
  printf("number b = %d",b);
  printf("number c = %d",c);
}*/

int main(){

  int a,b,c,numbers[3];

  printf("enter the number in position a");
  scanf("%2d",&numbers[0]);
  printf("enter the number in position b");
  scanf("%2d",&numbers[1]);
  printf("enter the number in position c");
  scanf("%2d",&numbers[2]);

  //subs();
  
  printf("number x = %d",numbers[0]);
  printf("number y = %d",numbers[1]);
  printf("number z = %d",numbers[2]);

  return 0;

}