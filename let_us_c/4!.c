#include <stdio.h>
//the code below finds the factorial value of the number entered by the user
int main(){
  int a, fact;

  printf("enter a number;\n");
  scanf("%d",&a);
  fact = rec(a);
  printf("factorial value  = %d;", fact);
  return 0;
}

int rec(int x){
  int f;

  if(x==1){
    return (1);
  }
  else 
    f = x * rec(x-1);//this is known as recursion caalling a function inside a functionn
  //the function rec inside the function rec is called till the if function appears true then the cycle is stopped and the value 1 is retuned
  return (f);
  //returns the vallue of f to main
  
}