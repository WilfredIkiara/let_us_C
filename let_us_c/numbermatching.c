#include <stdio.h>
int const password = 2786;

int main(){
  int crack = 0, i = 0;

  do{
    if (crack == password - 1){
      hacked();
    }
    else{
      crack++;
    }
  }while(crack  != password);
  
  printf("%d\n", crack);

}
hacked(){
  printf("you have succesfully hacked the password");
  return 0;
}

/*int next_number(crack){
  crack = crack + 1;
}*/