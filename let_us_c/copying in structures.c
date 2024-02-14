#include <stdio.h>

main (){
  struct employee{
    char name[0];
    int age;
    float salary;
  };
  struct employee e1={"sanjay", 30, 5500.50};
  struct employee e2, e3;

  /*piece meal cpopying*/
  strcpy(e2.name , e1.name);
  e2.age = e1.age;
  e2.salary = e1.salary;

  /*copying a;; elements at one go*/
  e3 = e2;

  printf("\n %s %d %f ", e1.name, e1.age, e1.salary);
  printf("\n %s %d %f ", e2.name, e2.age, e2.salary);
  printf("\n %s %d %f ", e3.name, e3.age, e3.salary);

}
//c does not allow assiging the contents of an array simply by equating the two
//to copy an array you have to copy element by element


//the above code lets you copy all structure elements at one go  because struture elements ae stored in contigous memory locations