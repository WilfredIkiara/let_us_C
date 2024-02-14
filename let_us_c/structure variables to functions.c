#include <stdio.h>

  struct book{
    char name[25];
    char author[25];
    int callno;
  }
//the data type of the struct book is not known to the functions in the pprogram thus should be  declared aoutside the main function
main(){
  struct book b1 = {"Let us C", "YPK", 101};
  display(b1);

}
display(struct book b){
  printf("\n %s %s %d", b.name , b.author, b.callno);

}