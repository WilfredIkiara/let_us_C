#include <stdio.h>
//declaration of a structure 
//accessing of structure elements
main(){
  struct book{
    char name;
    float price;
    int pages;

  };
  /*
  struct book {
    char name;
    float price;
    int pages;
  }b1,b2,b3
  */

  struct book b1,b2,b3;

  printf("\n Enter names, prices & no of pages of 3 books\n");
  scanf("%c %f %d", &b1.name , &b1.price, &b1.pages);
  scanf("%c %f %d", &b2.name , &b2.price, &b2.pages);
  scanf("%c %f %d", &b3.name , &b3.price, &b3.pages);

  printf("And this is what you entered");
  printf("%c %f %d", b1.name , b1.price, b1.pages);
  printf("%c %f %d", b2.name , b2.price, b2.pages);
  printf("%c %f %d", b3.name , b3.price, b3.pages);
}