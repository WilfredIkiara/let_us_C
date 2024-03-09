#include<iostream>
using namespace std;
int  main(){
  int index = 1;
  while(index <= 5){
    cout<<index<<endl;
    index++;
  }
  //this  /\  is the equivalent of this \/
  for(int i=1; i<=5; i++){
    cout<<index<<endl;
  }
  int nums[]= {1, 2, 3, 4, 5, 5, 6, 6};
  for (int i= 0;i < 100; i++){
    cout<<nums[i];
  }
  return 0;
}