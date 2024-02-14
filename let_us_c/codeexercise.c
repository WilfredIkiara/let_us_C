#include <stdio.h>

unsigned long long lower_upper(char character){
  if(character >='a'&&character<='z'){
    printf("The character entered is a small case");
  }
  else if(character >= 'A'&&character<='Z'){
    printf("The character entered is a small case");
  }
  return;
} 
unsigned long long alphabet(char character){
    if(character >='a'&&character<='z'){
    printf("Not an alphabet");
  }
  else if(character >= 'A'&&character<='Z'){
    printf("not an alphabet");
  }
  else
    printf("the character entered is an alphabet");
}
int bigger (int a, int b){
  if(a>b){
    printf("\na %d is bigger than b");}
  else if (b>a){
    printf("\nb %d is bigger than a");
  }
  else
    printf("the numbers entered are equal");
}
main(){
  int a, b;
  char character;
  printf("\nEnter a character to be checked if upper or lower");
  scanf("%c\n", &character);
  printf("The character you entered is %c", character);

  printf("\nEnter the first number to be checked");
  scanf("%d\n", &a);
  printf("The character you entered is %d",a);

  printf("\nEnter the second number to be checked");
  scanf("%d\n", &b);
  printf("The character you entered is %d",b);
  
  alphabet(character);
  lower_upper(character);
  bigger(a,b);
return 0;

}