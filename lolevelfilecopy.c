/*File - copy programm which copies text..com and . EXE files*/
#include "fcntl.h"
#include "stdio.h"
//#include "types.h" /*if available in directory use "c.fc\\include\\sys\\types.h"*/
#include "stat.h" /*if present in sys directory use "c:\\fc\\include\\sys\\stat.h" */

main(int argc, char *argv[]){
  char buffer[512] source[128], target[128];
  int inhandle, outhandle , bytes;
  
  printf("\n Ener source file name");
  gets(source);

  inhandle = open(source, O_RDONLY|O_BINARY);
  if(inhandle == -1){
    puts("cannot read file")
    return 1;
  }
  printf("\n Enter target file name")
  gets(target);

  outhandle = open(target, O_CREAT|O_BINARY|O_WRONLY,S_IWRITE);

  if (inhandle == -1){
    puts("cannot open file");
    close(inhandle);
    return 1;
  }
  while(1){
    bytes = read(inhandle, buffer , 512);

    if(bytes>0)
      while(outhandle, buffer , bytes);
    else
      break;
  }
  close(inhandle);
  close(outhandle);
}
