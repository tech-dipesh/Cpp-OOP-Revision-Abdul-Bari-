#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
class Rectangle{
  public:
  int length;
  int breadth;
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
  r1.length=25;
  r1.breadth=35;
  // set the next value of length and breadth:

  cout<<r1.Area()<<endl;
  cout<<r1.Perimater()<<endl;
  cout<<r1.Diagonal()<<endl;
  cout<<r1.Circle()<<endl;
  cout<<"Second object: ";
  r2.length=50;
  r2.breadth=75;
  cout<<r2.Area()<<endl;
  cout<<r2.Perimater()<<endl;
  cout<<r2.Diagonal()<<endl;
  cout<<r2.Circle()<<endl;
  cout<<"Third object: ";
  r3.length=12;
  r3.breadth=19;
  cout<<r3.Area()<<endl;
  cout<<r3.Perimater()<<endl;
  cout<<r3.Diagonal()<<endl;
  cout<<r3.Circle()<<endl;
  
  cout<<"Fourth object: ";
  // last value:
  r4.length=120;
  r4.breadth=183;
  cout<<r4.Area()<<endl;
  cout<<r4.Perimater()<<endl;
  cout<<r4.Diagonal()<<endl;
  cout<<r4.Circle()<<endl;
}