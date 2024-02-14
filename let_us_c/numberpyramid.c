#include <stdio.h>

int main(){
  int i,j;
  for(i=0;i<5;i++){
    printf(" ");
  }
  printf("1");
  for(i=0;i<4;i++){
    printf(" ");
  }
  printf("\n");
  for(i=0;i<1;i++){
  printf(" ");
  printf(" ");
  printf("1");
  printf(" ");
  printf(" ");
    for(j=0;j<1;j=2){
    printf("2");
    printf(" ");
    printf(" ");
    }
  printf("1");
  printf(" ");
  printf(" ");
  }
  printf("\n");
  for(j=0;j<1;j++){
    printf(" ");
    printf("1");
    printf(" ");
    printf(" ");
    for (i=0;i<2;i++){
      printf("3");
      printf(" ");
      printf(" ");
    }
    printf("1");
    printf(" ");
  }
  printf("\n");
    printf("1");
    printf(" ");
    printf(" ");
      printf("4");
      printf(" ");
      printf(" ");
        printf("6");
        printf(" ");
        printf(" ");
      printf("4");
      printf(" ");
      printf(" ");
    printf("1");
    printf("\n");
  return 0;
}