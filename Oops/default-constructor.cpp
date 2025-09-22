// constructor will not have any return types.
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Rectangle{
  int length;
  int breadth;
  public:
  Rectangle(){
     length=10;
     breadth=19;
  }

  
  void setLength(){
    if(length>=0) length=length;
    else length=1;
  }
  void setBreadth(){
    if(breadth>=0) breadth=breadth;
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
  Rectangle r;
  // r.setBreadth();
  // r.setLength();
  // Rectangle r();
  // printing the valeu inside a private:
  cout<<r.getLength()<<endl;
  cout<<"Area: "<<r.Area()<<endl;
  cout<<"Params: "<<r.Perimater()<<endl;
  cout<<"Circle: "<<r.Circle();
return 0;
}