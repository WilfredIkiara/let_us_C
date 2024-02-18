
#include "stdio.h"
main(int argc,char *argv[]){
  FILE *fs, *ft;
  char ch;

  if(argc !=3){
    puts("improper number of arguments");
    return 1;
  }

  fs = fopen(argv[1], "r");

  if (fs == NULL){
    puts("cannot open source file");
    return 1;
  }
  ft = fopen(argv[2],'w');
  if(ft==NULL){
    puts("cannot open target file");
    fclose(fs);
    return 1;
  }
  while (1){
    ch= fgetc(fs);
    if(ch ==EOF)
      break;
    else
      fputc(ch, ft);
  }
  fclose(fs);
  fclose(ft);
}