#include <iostream>
using namespace std;

class Book {
  public:
    string title;
    string author:
    int pages;
    Book (){
      title = "no title";
      author = "no author";
      pages = 0;
    }
    Book(string atitle, string aAuthor, int apages){
      cout<<title<<endl;
      cout<<"Creating objects"<<endl;
      title = atitle;
      author = aAuthor;
      pages = apages;
    };
};
int main(){
  Book book1("Hary potter", "Jk Rowling", 500);
  Book book2("Lord of the rings","Tolkein", 700);
  cout<<book1.title;
}