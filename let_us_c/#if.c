#include <stdio.h>

main(){
  #if TEST <=5
    statement 1;
    statement 2;
    statement 3;
  #else
    statement 4;
    statement 5;
    statement 6;
  #endif
}

#if ADAPTER == VGA
  code for video graphics array
#else
  #if ADAPTER == SVGA
    code for super video graphics array
  #else
    code for extended graphics adapter
  #endif
#endif

//the above code can also be writen like this

#if ADAPTER == VGA
  code for vedio graphics array
#elif ADAPTER == SVGA
  code for super video graphics array
#else 
  code for extended graphics adapter
#endif
//undefining a macro
#undef ADAPTER//this code line undefines the defined #ifdef ADAPTER making all the subesequent definations of adapter to evaluate to false 
