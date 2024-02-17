/*display contents of a file on screen*/
#include "stdio.h"

main(){
  FILE *fp;
  char ch;

  fp = fopen("PR1.C"/*file*/, "r"/*read mode*/);
  /*
  to open a file "PR1.C" in 'read' mode which tells the c compiler t read the contents of the file
  the fopen() performs three tasks
  . it searches on the disk the file to bbe opened 
  . then it loads the file from the disk into a place in memory called  buffer
  . it sets up a character pointer that points to the first character of the buffer

  the contents are placed on a buffer to save time of reading from the floppy disk

  all the information in the file is placed in FILE. fopen() then returns the adress of this structure. which we have collected in the structure pointer called fp. we declared fp as FILE *fp;
  the FILE structure has been defined in the header file "stdio.h"(standard input/output header file)

  */

  while(1){
    ch = fgetc(fp);
  /*
  to read the contents of the file a function fgetc() is called
  fgetc() reads the character from the current pointer position, advances the pointer position so that it now points to the next character, and returns the character that is read

  once the file has been opened we refer to the file as fp

  the while loop ends when we reach at the end of the file 
  an ASCII whose character value is 26 is inserted at the end of the file 
  when fget() reads this character it returns the macro EOF 
  the EOF is defined in <stdio.h>

  */
    if(ch == EOF)
      break;

    printf("%c" ,ch);
  }
  fclose(fp);/*closes the file*/

}
/* 
to check whether the file you want to open has been opened
if a file has not been opened the fopen() returns a value NULL (in <stdio.h> its #define NULL 0)
*/