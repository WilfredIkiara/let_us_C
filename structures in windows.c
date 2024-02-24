#include <stdio.h>
/*to make the user defined data in structures act look, act and behave ssimilar to standard data types */
struct rect{
  int top;
  int left;
  int right;
  int bottom;
};
typedef struct rect RECT;
typedef struct rect *PRECT;

RECT r;
PRECT pr;

