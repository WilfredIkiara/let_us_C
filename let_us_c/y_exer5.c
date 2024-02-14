#include <stdio.h>
//prints endless string of *
int main(){
  int n,m;
  printf("Enter n..");
  scanf("%d",&n);
  printf("Enter m..");
  scanf("%d",&m);

  for(int i=0;i<n;i++){
    for(int j = 0;j<m;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}