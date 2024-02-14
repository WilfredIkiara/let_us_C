#include <stdio.h>

int main(){
  int num[]= {24, 34, 12, 44, 56, 17};
  int i, *j;

  j = &num[0];

  for(int i =0 ;i<=5;i++){
    printf("\naddress = %u", j);
    printf("element = %d", *j);
    j++;/*increment point to point to next location*/
  }
  //accessing arrays by pointers is faster than accessing them using a subscript
}
//the code above 