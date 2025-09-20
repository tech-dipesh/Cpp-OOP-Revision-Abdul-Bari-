#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
class Rectangle{
  int length;
  int breadth;
  
  public:
  void setLength(int l){
    if(l>=0)  length=l;
    else length=1;
  }
  void setBreadth(int b){
    if(b>=0)  breadth=b;
    else breadth=1;
  }
  int getLength(){
    return length;
  }
  int getBreadth(){
    return breadth;
  }
  int Area(){
    return length+breadth;
  }
  int Perimater(){
    return 2*(length+breadth);
  }
  int Diagonal(){
    return sqrt(pow(length, 2)+ pow(breadth, 2));
  }
  
  int Circle(){
      return M_PI*pow(length*breadth, 2);
  }
};
int main(){
  Rectangle r1, r2, r3, r4;
  // set the next value of length and breadth:
  r1.setLength(25);
  r1.setBreadth(35);
  // printing the value :
  cout<<r1.getBreadth()<<endl;
  cout<<r1.Area()<<endl;
  cout<<r1.Perimater()<<endl;
  cout<<r1.Diagonal()<<endl;
  cout<<r1.Circle()<<endl;
  cout<<"Second object: ";
  r2.setLength(50);
  r2.setBreadth(75);
  cout<<r2.Area()<<endl;
  cout<<r2.Perimater()<<endl;
  cout<<r2.Diagonal()<<endl;
  cout<<r2.Circle()<<endl;
 
}