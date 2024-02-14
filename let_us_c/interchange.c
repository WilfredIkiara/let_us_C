#include <stdio.h>
//two numbers are input through the keyboard into two  locations c and d . write a program in c to innterchange the contents of c and d

char cf(int c){//when writing a new function one must start with the return type first
  
  if( c>10 ){
    printf("we ni fala\n");
      }
    else{
    printf("we ni fala sana\n");
      }
  return c;
}
int main(){
  int c;

  for(int i = 0;i<5; i++){ /// this statement can loop the code 5 times it actually does :)
  printf("enter a number");
  scanf("%d",&c);
  if(i>=2)
  /*
  printf("enter second number");
  scanf("%d",&d);      // comented out this part.....it works and answers the initial quesion the rest of the code is just side quests
  printf("c%d, d%d\n", c ,d);
  printf("c%d, d%d", d ,c);*/

  cf(c);} // the c must be there ......it acts as declaration
  return 0;
}
