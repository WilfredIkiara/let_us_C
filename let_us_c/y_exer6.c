#include <stdio.h>
int main(){
  int i, j, m,n;

  printf(" enter n");
  scanf("%d", &n);
  
  printf(" enter m");
  scanf("%d", &m);

  for(i=1; i<=m;i++){
    printf("*");
  }
  printf("\n");
  for (i =1; 1<=n-2;i++){
    printf("*");
      for(j=1;j<=m-2; j++){
        printf(" ");
      }
      printf("*\n");
  }
  for(i=1;i<=m;i++){
    printf("*");
  }



  return 0;
}
