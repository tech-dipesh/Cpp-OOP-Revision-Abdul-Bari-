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
  Rectangle (Rectangle (&r)){
    length=r.length;
    breadth=r.breadth;
  }
  void setLength(int len){
  if(len>=0) length=len;
   else length=1;
  }
  void setBreadth(int bre){
  if(bre>=0) breadth=bre;
  else breadth=1;
  }
  int getLength(){
    return length;
  }
  int getBreadth(){
    return breadth;
  }


  int Area(){
    return length*breadth;
  }
  int Perimater(){
    return 2*(length+breadth);
  }
  int Circle(){ 
     return M_PI*pow(length*breadth, 2);
  }
};


int main(){
  // Rectangle r;
  Rectangle r(29, 40);
  Rectangle r1(r);
  // printing the valeu inside a private:
  cout<<"Length is: "<<r1.getLength()<<endl;
  cout<<"Area: "<<r1.Area()<<endl;
  cout<<"Params Copy: "<<r.Perimater()<<endl;
  cout<<"Circle Copy: "<<r.Circle();
return 0;
}