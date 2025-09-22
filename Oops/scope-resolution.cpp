// constructor will not have any return types.
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
class Rectangle{
  int length;
  int breadth;
  public:
  Rectangle(int l, int b){
    setLength(l);
    setBreadth(b);
  }
  void setLength(int len);
  void setBreadth(int br);
  int getLength();
  int getBreadth();
  int Area();
  int Perimater();
  int Circle();
};
  void Rectangle::setLength(int len){
  if(len>=0) length=len;
   else length=1;
  } 
  void Rectangle::setBreadth(int br){
  if(breadth>=0) breadth=br;
  else breadth=1;
  }
  int Rectangle::getLength(){
    return length;
  }
  int Rectangle::getBreadth(){
    return breadth;
  }


  int Rectangle::Area(){
    return length*breadth;
  }
  int Rectangle::Perimater(){
    return 2*(length+breadth);
  }
  int Rectangle::Circle(){ 
     return M_PI*pow(length*breadth, 2);
  }


int main(){
  Rectangle r(29, 40);
  // printing the valeu inside a private:
  // cout<<r.getLength()<<endl;
  cout<<"Area: "<<r.Area()<<endl;
  cout<<"parametrized Constructror Perimater: "<<r.Perimater()<<endl;
  cout<<"Circle : "<<r.Circle();
return 0;
}