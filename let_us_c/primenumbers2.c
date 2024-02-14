#include <Stdio.h>
//this program should write all the prime numbers from 1 - 1000
int main(){
  int i=2,num,isprime;

  for (num = 1;num<1000;num++){
    for(i =2; i<=num-1;i++){
      if(i%num==1){
        isprime =0;
        break;
      }
    }
    if(isprime==0){
      printf("%d\n", num);
    }
  }

  return 0;
}