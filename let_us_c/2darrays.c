#include <stdio.h>

int main(){
  int stud[4][2];
  int i, j;

  for(i=0;i<=3;i++){
    printf("\nEnter roll no and marks ");
    scanf("%d %d", &stud[i][0],&stud[i][1]);//notice the type of scanf
  }
  for(i=0;i<=3;i++){
    printf("\n%d %d", stud[i][0], stud[i][1]);
  }
  //the numbers entered are stored in rows and the subscripts tell the array whuch row and column you are talking about the counting of rows begins with 0
  
}