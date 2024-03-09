#include <iostream>

main()

{/*
type conversion - conversion of one data type to another 
implicit= automatic 
explicit = precode value with new data type(int)
*/
//int x= 3.14;//this turns the double value to an integer

double x = (int)3.14;//this turns double to integer
char y = 100;
std::cout<<(char)100;
std::cout<<x;
//will bring the ascii value of 100 that is d

return 0;}