#include "stdio.h"
//rigt shift operator
//the left shif operator works the same jus uses << instead of >>
showbits(int num){
  int i;
  unsigned int bit;

  for (i = 31; i>=0; i--){
    /*an integer has 32 bits*/
    bit = (num>>i) &1;//this code changs to bit
    printf("%u", num);//this code prints
  }
}
//its good practice to put an int and a return on the main function
main(){
  int i = 5225,j,k;

  printf("\n Decimal %d is same as binary", i);
  showbits(i);

  for( j = 0; j <=5; j++){
    k = i>>j;
    printf("\n %d right shift %d gives", i, j);
    showbits(k);
  }
  return 0;
}

/*
64>> 1 gives 32
64>>2 gives 16
128>>2 gives 32
but 
27>>1 is 13
49>>1 is 24
*/
