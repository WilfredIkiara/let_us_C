#include <stdio.h>
#define AREA(x)(3.14*x*x)

main(){
  float rl=6.25, r2 = 2.5,a;

  a = AREA(rl);//acts as the functio that replaces x with the value of r1 same with r2
  printf("\n area of circle = %f", a);
  a = AREA(r2);
  printf("\n area of  circle = %f", a);
} 
//refer to the file #if.c
//should be capital 
//should n0t have space 