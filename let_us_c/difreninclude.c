#include <stdio.h>
//program to calculate a square
int main(){
  float square (float);//this is the prototype declaration of this value
  //this code snippet means that the fuction recieves a float and returns a float
  //if there are any functions make a declaration outside of the functions
  float a,b ;
  printf("Enter the nnumber to be squared");
  scanf("%f", &a);
  printf("%f\n", a);
  //b = a*a;
  //printf("%f\n", b);

  b = square(a);
  printf("%.4f",b);//return the float in four decimal values
}
float square(float a){
  float c;
  c = a*a;
  return (c);
}