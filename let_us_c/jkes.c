#include <stdio.h>
//useless
int main (){
  char abc;
  abc = 'b';
  char fun (char);
  fun( abc);
}

char fun( char abc){
if (abc =! 'b'){
  return (abc);
}
else 
  printf("%c", abc);
  return (abc);
}