#include "alloc.h"

main(){
  char *names[6];
  char n[50];
  int len, i;
  char *p;
  
  for (i = 0, i<=5;i++){
    printf("Enter name ");
    scanf("%s", n);
    p = malloc (len + i);
    strcpy(p , n);
    names[i]= p;
  }
  for(i=0;i<=5;i++)
    printf("\n%s", names[i]);
}