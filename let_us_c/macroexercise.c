#include <stdio.h>
//using macro to write a code to check if lower or upper case
#define CHAR 
void check_case(char character) {
    if (character >= 'a' && character <= 'z') {
        printf("%c is a lowercase letter.\n", character);
    } else if (character >= 'A' && character <= 'Z') {
        printf("%c is an uppercase letter.\n", character);
    } else {
        printf("%c is not a letter.\n", character);
    }
}

main(){
  char a;
  printf("Enter a character;");
  scanf("%c", &a);

  #ifdef CHAR
    check_case(a);
  #endif
  //ifdef must be terminated by an end if
  
}