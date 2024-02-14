#include <stdio.h>

main(){
  struct adress{
    char phone [15];
    char city[25];
    int pin;
  };
  struct emp{
    char name[25];
    struct adress a;
  };
  struct emp e = {"jeru", "531046", "nagpur", 10};
  printf("\n Name = %s Phone = %s", e.name, e.a.phone);
  printf("\n City = %s Pin = %d", e.a.city, e.a.pin);
  /*
  the above code nests a structure in another structure(it uses e.a.[whatever name youeve given the variable]){e.a.pin, e.a.city} and prints the values stored in the structures themselves
  */

 //nesting of structures can lead to selfdescriptive variables eg .... maruti.engine.bolt.large.gty
}