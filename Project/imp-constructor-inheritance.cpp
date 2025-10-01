#include <iostream>
using namespace std;
    
class Parent{
  public:
  Parent(){
    cout<<"Parent default constructor"<<endl;
  }
  Parent(int x){
    cout<<"Parent Param constructor: "<<x<<endl;
  }
};
class Child: public Parent{
  public:
  Child(){
    cout<<"Child default constructor"<<endl;
  }
  Child(int a){
    cout<<"Child Single params constructor. "<<a<<endl;
  }
  Child(int x, int y): Parent(x){
    cout<<"Child Param constructorm, with sending value to parent class: "<<x<<endl;
  }
};
int main(){
  Child c;
  cout<<endl<<endl<<"For Params constructor calling: "<<endl<<endl;
  Child c1(25);
  cout<<"Multiple Params with sending to the base class: "<<endl<<endl;
  Child c2(56, 75);
return 0;
}