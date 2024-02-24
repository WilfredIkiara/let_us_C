#include <stdio.h>
//the program in the book is not complleted
main(){
  int j, k;

  for(j=0;j<=3;j++){
    printf("\n Decimal %d is same as binary", j);
    showbits(j);

    k=~j;
    printf("\n Ones compliment of %d is", j);
    showbits(k);
  }
}

showbits(int num){
  int i;
  unsigned int bit;

  for (i = 31; i<=0; i--){
    /*an integer has 32 bits*/
    bit = (num>>i) &1;//this code changs to bit
    printf("%u", num);//this code prints
  }
}