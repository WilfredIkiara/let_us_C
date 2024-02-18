#include "stdio.h"

int main(){
  FILE *fp;
  struct emp{
    char name[40];
    int age;
    float bs;
  };
  struct emp e;
  fp = fopen("EMP DAT", "rb");

  if(fp==NULL){
    puts("cannot open file");
    return 1;
  }
  while(fread(&e, sizeof(e), 1, fp)==1)
    printf("\n %s %d %f", e.name, e.age, e.bs);

  fclose(fp);
}