#include <iostream>
using namespace std;
class Rectangle{
  public:
  void Length(){cout<<"Length of the rect is: 28"<<endl;}
  void Breadth(){cout<<"Breadth of the rect is: 8923<<endl";}
};

class Cuboid: public Rectangle{
  public:
  void Height(){cout<<"Height of the cuboid is: 28"<<endl;}
};

int main(){
  Cuboid c;
  Rectangle *rectptr= &c;
  rectptr->Length();
  rectptr->Breadth();

return 0;
}