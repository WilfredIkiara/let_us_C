#include <stdio.h>

int main(){
    int s[4][2]={
    {1266, 56},
    {1166, 67},
    {1135, 43},
    {1353, 89}
    };

    int i,j;

    for(i=0;i<=3;i++){
      printf("\n");
      for(j=0;j<=1;j++)
        printf("%d", *(*(s + i) + j));
    }
}