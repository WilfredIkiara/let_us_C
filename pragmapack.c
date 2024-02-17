#include <stdio.h>

main(){
#pragma pack(1):
struct emp
{
  int a;
  char ch;
  float s;
};
#pragma pack();

struct emp e;
printf("%u %u %u",&e.a, &e.ch,&e.s);
//#pagma pack(1) lets each structure element to begin on a 1 - byte boundary eg 1245044 1245048 1245049
}