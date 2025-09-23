#include <iostream>
using namespace std;

class Parent{
  public:
    void Display(){
      cout<<"This is display only on parent";
    }
    void Print(){
      cout<<endl<<"It's a parent function."<<endl;
    }
  };
  class Child: public Parent{
    public:
    void Print(){
      cout<<endl<<"It's a parent function."<<endl;
    }
    void Childish(){
      cout<<"Only the Child class called.";
    }
   }; 
int main(){
  Child c;
  c.Display();
  c.Print();
  c.Childish();
return 0;
}