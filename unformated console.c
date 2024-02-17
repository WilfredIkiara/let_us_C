#include <stdio.h>

main(){
  /*
  the scanf() has a weakness the user has to press enter when a ccharacter is entered and read in a function
  if you wan the function to read the character directly when the user enters it, you use getch() and getche().
  the 'e' in getche() means it ecchos(displays) the chaaracter that you typed to the screen , 
  getch() just returns the character you typed without echoing it on the screen.
  getchar() also echos the typed character on the screen.
  fgetchar() 
  */

 char ch;

 printf("\n press any character");
 getch(); /*will not echo the character*/
 printf("\n type another character");
 ch = getche();/*will echo the characters typed*/
 printf("\n type a new character now");
 getchar();/*will echo the characters that are entered, must be followed by enter key*/
 printf("continue Y/N");
 fgetchar();/*will echo character. must be followed by enter key*/

}