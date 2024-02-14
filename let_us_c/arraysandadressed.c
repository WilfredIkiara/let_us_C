//in arrays bytes are two bits apart so when they are stored they are put in
/*
65512 65514 65516 65518 65520*/

#include <stdio.h>
//the code below prints the number and the the byte location adress
int main(){
  int num[]={24, 34, 12, 44, 56, 17};
  int i;

  for(i=0;i<=5;i++){
    printf("\n element no %d", i);
    printf("address = %u", &num[i]);
  }
  
  }