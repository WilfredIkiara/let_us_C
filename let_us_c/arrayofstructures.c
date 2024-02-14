#include <stdio.h>

main(){
   struct book{
    char name;
    float price;
    int pages;
   };

   struct book b[100];
   int i;

   for (i=0;i<=99;i++){
    printf("\n Enter name , price , and pages");
    scanf("%c %f %d, ", &b[i].name, &b[i].price , &b[i].pages);

  for(i=0;i<=99;i++){
    printf("%c %f %d, ",b[i].name, b[i].price , b[i].pages);
  }
   }
}
//the link code functtion prevents the error floating point fomat not linked
linkfloat(){
  float a=0,*b;
  b = &a;/*cause emulator to be linked*/
  a = *b;/*supress warning - variable not used*/
} 