#include <stdio.h>

int main(){
  char character;

  printf("Enter your grades(in caps !!\n");
  scanf("%c",&character);

  switch(character){
    case 'A':
      printf("you scored a perfect score\n");
      break;
    case 'B':
      printf("you can do better\n");
      break;
    case 'C':
      printf("pull up yor socks boy\n");
      break;
    case 'D':
      printf("you almost failed boy , work harder or get uot of school child\n");
      break;
    case 'E':
      printf("you failed!!\nYour momma raised you better than this\nThe only way back is up\nMake your parents proud\n");
      break;
  }
  
  return 0;
}