#include <Stdio.h>
//this program should write all the prime numbers from 1 - 1000
int main(){
  int i=2,num;

  scanf("%d",&i);

  while(i<1000);
  {
    while(i<=num-1)
      {
        if(num%i==1){
          printf("%d\n", i);
        }
      }
    i++;
  }
  return 0;
}