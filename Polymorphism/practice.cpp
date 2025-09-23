#include <iostream>
using namespace std;
    // write class with polymorpshism base class and derived class: rectangle and circle:
class Shape{
public:
virtual float Area()=0;
virtual float perimeter()=0;
};


class Rectangle: public Shape{    
  int length;
  int breadth;
public:
  Rectangle(int length=10, int breadth=25){
    this->length=length;
    this->breadth=breadth;
  }
float Area(){
  return length*breadth;
}
float perimeter(){
  return 2*(length+breadth);
}

};

class Circle: public Shape{
 float radius;
public:
  Circle(float r){
    radius=r;
  }
float Area(){
  return 3.1314*radius*radius;
}
float perimeter(){
  return 2*3.1425*radius;
}
};
int main(){
  // with only polymorphism.
 Shape *s=new Rectangle(29, 30);
 cout<<"Rectnagle area: "<<s->Area()<<endl;
 cout<<"Perimeter area: "<<s->perimeter()<<endl;
 s=new Circle(28);
 cout<<"Circle Area: "<<s->Area()<<endl;
 cout<<"Circle Perimeter: "<<s->perimeter();
return 0;
}