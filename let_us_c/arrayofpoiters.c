#include <stdio.h>
//initializing a pointer on strings
main(){
  char *name[]={
    "akshay",
    "parag",
    "raman",
    "srinivas",
    "gopal",
    "rajesh"
  };
  char t;
//elow is a code to exchange the names in the list of arrays
for(int i =0 ; i<=9;i++){
  t = name[2][i];
  name[2][i]=name[3][i];
  name[3][i]=t;
}
  printf("%s %s", name[2][0],name[3][0]);
}