#include <iostream>
using namespace std;

class Parent{
  public:
  virtual  void Print(){
    cout<<endl<<"It's a parent function."<<endl;
  }
  void Display(){
    cout<<"This is display only on parent";
  }
  };
  class Child: public Parent{
    public:
    void Print(){
      cout<<endl<<"It's a child function."<<endl;
    }
    void Childish(){
      cout<<"Only the Child class called.";
    }
   }; 
int main(){
  Child c;
  Parent *parentptr=&c;


  // it will call the chidl functino due to the virtual function which work look like real life.
  parentptr->Print();
  parentptr->Display();
return 0;
}