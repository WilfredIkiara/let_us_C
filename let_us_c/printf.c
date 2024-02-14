#include <stdio.h>
/*
  ramesh's basic salary is input through the keyboard. his allowance is 40% of basic salary, and house rent alowance is 20% of basic salary. write a program to calculate his gross salary
*/

main(){
  float a1, a2, salary;
  printf("input basic salary");
  scanf("%f", &salary);
  a1 = 0.4 * salary;
  a2 = 0.2 * salary;
  salary = salary + a1 + a2;
  printf("%f", salary);
  return 0;
}