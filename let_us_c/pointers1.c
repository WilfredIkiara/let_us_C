#include <stdio.h>
int main(){
  /*int i;
  
  //i = 6;
  printf("input the number to be input in i");
  scanf("%d",&i);

  printf("\n Adress of i is %u", &i);
*/
  char i;

  printf("enter a character");
  scanf("%c", &i);
  printf("%c",i);
  printf("the adress of the character in variable i is %u",&i);
}