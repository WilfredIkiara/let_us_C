#include <stdio.h>

showbits(int n){
  int i , k, andmask;

  for(int i = 15;i>=0;i--){
    andmask = 1<<i;
    k = n&andmask;

    k== 0?printf("0"):printf("1");
  }
}
/*the code below and above checks the status of the individual bits if on 1 , if off 0'
The irst time through the loop, the variable adnmask will contain 100000000000(i did not put enough zeros sdai kucount)
this is done by left shifting 1 for fifteen place , then zeros are 14
*/

int main(){
  int n = 5225;

  showbits(n);
}