#include <stdio.h>
//for loop that writes numbers from from 1 to 10 
int main(int i){
for(scanf("%d",&i);i<=10;i++)// this is the for loop first it initializez 1 as 1 since it does not assign a number then the i is tested if its more than or equal to 10 then the statement jums to 1++ where the increment takes place
printf("%d\n",i); //this is the statement that is executed after the loop is run....can have braces but since its one line of statement its not a must
return 0;
}

