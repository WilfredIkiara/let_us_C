#include <stdio.h>
int main (){
  register int i;//puts the int value in the storage class register thusnis retrieved faster from cpu register 
  //not every variable can be stored in a CPU register 
  //if the micro processor has 16 bit registers haeizani na float values
  //tho ata ukitumia akuna error fuck it!!
}


int main(){
  increment();
  increment();
  increment();
}

int increment(){
  auto int i =1;//the values stores in automatic storage do not persist when called betwn functions
  printf("\n%d\n",i);
  i++;
}

int main(){
  increment();
  increment();
  increment();
}

int increment(){
  static int i =1;//values stored in static storage persist even between functions they are stored in the memory
  printf("\n%d\n",i);
  i++;
  
}