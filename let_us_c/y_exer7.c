#include <stdio.h>
// the code below x! 9!=9×8×7×6×5×4×3×2×1=362880
int main(){
  int x, i, res = 1 ;

  printf("enter x");
  scanf("%d", &x);

  if (x > 0){
    for(i=1;i<=x;i++){
      res = res * i;
      printf("%d\n",res);
    }
  }
  else if(x < 0){
    x = x * -1;
    for(i=1;i<=x;i++){
      res = res * i;
      printf("%d\n",res);
    }
    res = res* -1;
  }
  printf("%d! = %d", x, res);
}