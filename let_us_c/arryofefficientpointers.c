#include <stdio.h>

main(){
  char *name[]={
        "akshay",
    "parag",
    "raman",
    "srinivas",
    "gopal",
    "rajesh"
  };

  char *temp;

  printf("Original %s %s ", name[2], name[3]);

  temp = name[2];
  name[2]= name[3];
  name[3]= temp;

  printf("\n New %s %s", name[2], name[3]);
}