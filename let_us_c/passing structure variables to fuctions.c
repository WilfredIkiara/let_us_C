#include <stdio.h>
/*passing individual structure elements */

main(){
  struct book{
    char name[25];
    char author[25];
    int calino;
  };
  struct book b1={"Let us C","YPK", 101};

  display(b1.name , b1.author, b1.calino);/*function call*/
/*when calling the function display like this we pass the base adress of the array naem and author......int is stored in the value calina this makes this a mixed reference call*/
}

display (char *s, char *t, int n){
  printf("\n %s ,%s , %d",s,t,n );
}