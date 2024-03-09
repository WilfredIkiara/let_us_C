#include <iostream>
#include <cmath>

int main(){
  double adj, opp, hyp;

  std::cout<<"Enter the opposite value of the triangle"<<'\n';
  std::cin>>opp;

  std::cout<<"Enter the adjacent value of the triangle"<<'\n';
  std::cin>>adj;

  hyp = sqrt( (pow(adj,2)) + (pow(opp,2)) );
  std::cout<<"the hypotnuse of your triangle is "<<hyp;

  /*
  opp = pow(opp, 2)
  adj = pow(adj, 2)
  hyp = sqrt(opp + adj)
  */
}
