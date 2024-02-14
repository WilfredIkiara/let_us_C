#include <stdio.h>

int main(){
  int arr[]={10,20,36,72,45,36};
  int *j, *k;

  j = &arr[4];
  k = (arr + 4);

  if ( j == k)
    printf("The pointers are in thee same location");
  else
    printf("The two pointers do not point  to the same location");
}
//two pointers cannot be added nor can one  be multiplied or divided with a constant
