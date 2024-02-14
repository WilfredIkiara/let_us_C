#include <stdio.h>

main(){
  char masterlist[6][10]={
    "akshay",
    "paraq",
    "raman",
    "srinivas",
    "gopal",
    "hajesh"
  };
  int i , flag,a;
  char yourname[10];

  printf("\n Enter your name");
  scanf("%s", yourname);

  flag = 'NOTFOUND';
  for(i=0;i<=5;i++){
    a = strcmp(&masterlist[i][0], yourname);
    if (a==0){
      printf("Welcome, you can enter the palace");
      flag = 'FOUND';
      break;
    }
  }
  if(flag == 'NOTFOUND'){
    printf("sorry you are a tresspasser");
  }
}