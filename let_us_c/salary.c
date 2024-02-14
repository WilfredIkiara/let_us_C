
#include <stdio.h>

int main(){
  int  y, qua,gen, sal;

  printf("enter the number of years worked\n");
  scanf("%d", &gen);
  printf("enter your gender (male 0 && female 1)\n ");
  scanf("%d", &y);
  printf("enter you qualifications. (post graduate = 0. graduate = 1)\n");
  scanf("%d", &qua);
  printf("years %d,\n gender %d,\n qualification %d\n", gen ,y , qua);
  if ( gen == 0 && y >=10 && qua == 0 || gen == 0 && y <10 && qua == 0|| gen == 1 && y < 10 && qua == 0 ){
    sal = 10000;
  }
  else
    if(gen == 0 && y >=10 && qua == 0)
    {sal = 15000;}
  else
    if(gen == 0 && y<10 && qua  == 1){
      sal = 7000;
      }

  return 0;


}