#include "stdio.h"

main(){
  FILE *fp;
  char ch;

  fp= fopen("TRIAL", "W");

  while(!feof(fp)){
    ch = fgetc(fp);
    if(ferror()){
      printf("Error reading message");
      break;
    }
    else 
      printf("%c", ch);
  }
  fclose(fp);
}