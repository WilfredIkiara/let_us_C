#include <stdio.h>
// x^y, x^-y
int main(){
  int x, y, power;
  printf("Enter the value of x\n");
  scanf("%d", &x);
  printf("Enter the value of y\n");
  scanf("%d", &y);


  if(x > 0 && y > 0){
    for(int i = 1;i< y;i++){
     x = x * x;
    printf("%d\n", x);
    }
  }
  else if(y < 0){
    y = y * -1;
    for(int i = 1;i< y;i++){
     x = x * x;
    }
  }
    else if(x < 0){
    x = x * -1;
    for(int i = 1;i< y;i++){
     x = x * x;
    }
  }
    else if(x< 0 && y < 0){
    y = y * -1;
    x = x * -1;
    for(int i = 1;i< y;i++){
     x = x * x;
    }
  }

  printf("\n%d\n", x);

  return 0;
}