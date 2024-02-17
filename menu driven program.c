#include <stdio.h>

main(){
  struct book{
    int bookNo, countNo,accessionNo;
    char author[100], title[100];
  };
  int i,j;
  struct book b[1];

  for(i=1;i<=1;i++){
  printf("Enter the details of the book");
  printf("The accession no");
  scanf("%d\n",&b[i].accessionNo);
  printf("The count number of the books");
  scanf("%d\n",&b[i].countNo);
  printf(" the book number");
  scanf("%d\n",&b[i].bookNo);
  printf("The title of the book");
  scanf("%s\n",&b[i].title);
  printf("The author that wrote the booka");
  scanf("%s\n",&b[i].author);
  }

  for(j = 1;j<=1;j++){
    printf("The accession number is %d,\nThe count number is %d,\nThe book number is %d\n, The Title of the book %s,\nThe author  %s ",b[i].accessionNo, b[j].countNo,b[j].bookNo,b[j].title,b[j].author);
  }
  return 0;
}
