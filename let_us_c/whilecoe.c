#include <stdio.h>

int main(){

  
  int nof, grace,A;
  printf("%d grace", grace);
  printf("enter obtained class\n1 firstclass\n2 second class\n3 third class\n");
  scanf("%d",&A);
  printf("enter number of subjects failed\n");
  scanf("%d",&nof);


  switch (A)
  {
  case 1:
    if ( nof >3)
    {
      grace = 0;
    }
    else
      if(nof<=3){
        grace = 5 * nof;
      }
    
    break;
  case 2:
      if ( nof>2)
    {
      grace = 0;
    }
    else
      if(nof<=2){
        grace = 4 * nof;
      }

    break;
  case 3:
      if ( nof >1)
    {
      grace = 0;
    }
    else
      if(nof == 1){
        grace = 5 * nof;
      }
    break;
  }

  printf("%d grace %d nof ",grace, nof);

  return 0;
}