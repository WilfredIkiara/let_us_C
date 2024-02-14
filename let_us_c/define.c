#define AND &&
#define OR ||
main(){
  int f=1 ,x =4, y=90;

  if((f<5)AND( x <=20 OR y<=45))
    printf("\n your pc will always work fine. ");
  else 
    printf("\nint front of the maintainance man");
}

#define FOUND printf("the yankee doodle");

main(){
  char signature;

  if (signature == 'Y')
    FOUND
  else 
    printf("safe , as yet");
}