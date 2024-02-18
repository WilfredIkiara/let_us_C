#include "stdio.h"
/*
the numbers would occupy more number of bytes since the file is opened in text mode
*/
//the program below stores text in binary
main(){
  FILE *fp;
  char another = "Y";
  struct emp{
    char name[40];
    int age;
    float bs;
  };
  struct emp e;

  fp = fopen("EMP DAT", "wb");

  if( fp == NULL){
    puts("cannot open");
    exit();
  }
  while( another == 'Y'){
    printf("\n Enter name, age , basic salary");
    scanf("%s %d %f", &e.name, &e.age, &e.bs);
    fwrite(/*struture*/&e, sizeof(e), 1/*number of such structures we want to write at a time*/, fp/*pointer to the file to be written*/);

    printf("Add another record(Y/N)");
  fflush(stdin);
  another = getche();
  }
  fclose(fp);
}