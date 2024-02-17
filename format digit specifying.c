#include <stdio.h>
//the code below shows the benefit of using firmat digit specifying

main(){
  printf("\n %f %f %f", 5.0,13.5,133.9 );
  printf("%f %f %f", 305.0, 1200.9,3005.3);
  //in the above program theres a diffrence btwn the output 

  /* 5.000000 13.500000 133.900000
     305.000000 1200.900000 3005.300000      

     5.0       13.5      133.9
     305.0     1200.9     3005.3
  */
  printf("\n%10.1f %10.1f %10.1f",5.0,13.5,133.9);
  printf("\n%10.1f %10.1f %10.1f",305.0, 1200.9,3005.3);
}