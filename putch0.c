#include <stdio.h>

main(){
  char ch = 'A';

  putch(ch);
  putchar(ch);
  fputchar(ch);
  putch('z');
  putchar('z');
  fputchar('z');
  /*they can only printf one character at a time
  also the above calls do the same shit*/
}