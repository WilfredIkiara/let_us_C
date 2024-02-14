#include <stdio.h>

int main(){
  int ch;

  
  printf("Enter your number");
  scanf("%d", &ch);
  fun(ch);

  //printf("%d", ch);
  return 0;

}
int fun(ch){
  if (ch>0&&ch<=25){
    printf("second quater\n");
    return ch;
  }
    if (ch>25&&ch<=50){
      printf("second quater\n");
  }
    if (ch>50&&ch<=75){
      printf("second quater\n");
  }
    if (ch>75&&ch<=100){
      printf("second quater\n");
  }
}