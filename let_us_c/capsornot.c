#include <stdio.h>
void check_case(char character) {
    if (character >= 'a' && character <= 'z') {
        printf("%c is a lowercase letter.\n", character);
    } else if (character >= 'A' && character <= 'Z') {
        printf("%c is an uppercase letter.\n", character);
    } else {
        printf("%c is not a letter.\n", character);
    }
    return;
}
main(){
  char character;
  printf("enter a character;\n ");
  scanf("%c", &character);

  check_case(character);
  return 0;
}