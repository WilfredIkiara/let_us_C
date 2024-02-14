#include <stdio.h>
// the code below is of a simple calculator
void main(){
  int a, b;
  char op;
  float res;
  
  printf("Enter op: \n");
  scanf("%c", &op);

  printf("Enter a:");
  scanf("%d", &a);

  printf("Enter b:");
  scanf("%d", &b);

  switch(op){
    case '+':
      res = a + b;
      break;
    case '-':
      res = a - b;
      break;
    case '*':
      res = a * b;
      break;
    case '/':
      if(b==0){
        printf("Syntax errorrr dint you go to school");
        return ;
      }
      else
        res = a / b;
        break;
  }
  printf(" %2.f, \n a %d, \n b %d",res, a, b);


}