#include <stdio.h>

int main(){
  int avg,sum = 0;
  int i;
  int marks[30];/*array declaration*/

  for(i = 0 ; i<=29;i++){
    printf("\nEnter marks");
    scanf("%d", &marks[i]); /*stores data in array*/

  }
  for(i=0;i<=29;i++){
    sum = sum + marks[i]; /*read data from an array*/
  }
    avg = sum/30;
    printf("\naverage marks = %d", avg);
  
}