#include <stdio.h>
//the code below gives the perimeter and the area when you enter the perieter of a circle
int main(){

  int radius;
  float area, perimeter;
  printf("Enter the radius");
  scanf("%d", &radius);
  areaperi(radius, &area, &perimeter);

  printf("area = %f", area);
  printf("perimeter = %f", perimeter);
}

int areaperi(int r, float *a, float *p){
  *a = 3.14 * r * r;
  *p = 2 * 3.14 * r;
}