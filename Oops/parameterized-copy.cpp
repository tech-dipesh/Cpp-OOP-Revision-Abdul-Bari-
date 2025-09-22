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

  void setLength(int len){
  if(len>=0) length=len;
   else length=1;
  } 
  void setBreadth(int br){
  if(breadth>=0) breadth=br;
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
  Rectangle r(29, 40);
  // printing the valeu inside a private:
  // cout<<r.getLength()<<endl;
  cout<<"Area: "<<r.Area()<<endl;
  cout<<"parametrized Constructror Perimater: "<<r.Perimater()<<endl;
  cout<<"Circle : "<<r.Circle();
return 0;
}