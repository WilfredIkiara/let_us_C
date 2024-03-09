#include <iostream>
//the code below uses integer dvision to help grade an exam
int main(){
  //irrelevant cout << (insertion operator)
  //cin >>(extractio operator)
  int correct = 8;
  int questions = 10;

  double score = correct/(double)questions*100;

  std::cout<<score<<"%";
  return 0;
}