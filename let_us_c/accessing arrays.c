#include <stdio.h>

int main(){
  int num[]={24,34,12,44,56,17};
  int i;

  for(i = 0;i<=5;i++){
    printf("\nadress = %u", &num[i]);
    printf("\nElement = %d%d", num[i], *(num + i));
    printf("\n%d,%d", &num[i]);
  }
}