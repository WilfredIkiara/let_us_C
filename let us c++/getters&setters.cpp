#include <iostream>

using namespace std;
class movie{
  private:
    string rating;
  public:
    string title;
    string director;
    //string rating;
    movie(string aTitle, string aDirector, string aRating){
      title = aTitle;
      director=aDirector;
      rating = aRating;
      setRating(aRating);
  }
  void setRating(string aRating){
    //rating = aRating;
    if(aRating == "G"||aRating == "pg 13", aRating =="R"||aRating=="NR"){
    rating = aRating;
    }
    else{
      rating = "NR";
    }
  }
  string getRating(){
    return rating;
  }
};
int main(){
  movie avengers("The avengers", "Joss Whedon", "pg 13");  

  cout<<avengers.getRating();
  return 0;
}