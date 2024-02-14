#include <stdio.h>

int main(){
  int num[]={24, 34, 12, 44, 56, 17};
  display(&num[0], 6);
  //display(num, 6);
  /*these two function calls are the same*/
}
display(int *j, int n){
  int i;
  for(i =0;i<=n;i++){
    printf("\n element = %d", *j);
    j++; /*increment pointer to point to next element*/
  }
}