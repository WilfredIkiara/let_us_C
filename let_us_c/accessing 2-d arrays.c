#include <stdio.h>
/*n*(base adress +row no * no of columns + column no)*/
int main(){

  int a[3][4]={
    1,2,3,4,
    5,6,7,8,
    9,0,1,6
  };
  display (a, 3,4);
}
  display(int *q , int row ,int col){
    int i,j;

    for(i=0;i<row;i++){
      for(j=0;j<col;j++)
        printf("%d",*(q+i*col+ j));
        //lets assume i is 2 and j is 3 then we are trying to  look for a[2][3]
        // *(q+i*col+j) *(65502 + 2*4 +3)
        //this is *(65502 + 11) which is the value in the column.....we shika tuh formula 
        /**(base adress +row no * no of columns + column no)*/
        printf("\n");
    }
    printf("\n");
  }