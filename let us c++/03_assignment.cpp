//write a cpp program to calculate the area of a circle the circumfrence of the same circle and area of the triangle using hyrid inheritance
#include <iostream>
#include <cmath>

using namespace std;

class shapes{
public:
  double getArea();
  double getPerimeter();
  double getDimensions();
};
class circle:public shapes{
  private:
    double radius;
  public:
    void getDimensions() {
      cout<<"Enter the radius of the circle";
      cin>>radius;
    }
    double getArea() {
      return 2 * 3.142 * radius;
    }
    double getPerimeter() {
      return 3.142 * radius * radius;
    }

  class triangle : public shapes{
    private:
      double side1, side2, side3;
    
    public:
      void getDimensions(){
        cout<<"Enter the lenggths of the three sides of the triangle";
        cin>> side1 >> side2 >> side3;
      }

      double getArea(){
        double s=(side1+side2+side3)/2;
        return sqrt(s*(s - side1)*(s-side2)*(s-side3));
      }
      double getPerimeter(){
        return side1+side2+side3;
      }
  };

  int main(){
    char choice ;
    shapes* shapes;

    do{
      cout<<"Enter 'C' for circle of 't' for triangle";
      cin>>choice;
    }while (choice != 'c' && choice != 't');
    if(choice == 'c'){
      return 0;
    }
    else{
      return 0;
    }
    shapes -> getDimensions();

    cout<<"Area :"<<shapes->getArea();
    cout<<"perimeter : "<<shapes->getPerimeter();}};