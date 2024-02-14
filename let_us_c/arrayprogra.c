#include <stdio.h>

main(){
  char name[3];
  float price[3];
  int pages[3];

  printf("Enter  names, price and no of pages of 3 books");
  for(int i=0;i<=2;i++)
    scanf("%c %f %d", &name[i], &price[i],&pages[i]);

    printf(
      '\n And this is what entered \n'
    );
    for(int i=0;i<=2;i++)
      printf("%c %f %d\n", name[i], price[i],pages[i]);
}