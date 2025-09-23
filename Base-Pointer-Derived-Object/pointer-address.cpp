#include <iostream>
using namespace std;
class Base{
  public:
  void Fun1(){cout<<"Hello world"<<endl;};
  void Fun2(){cout<<"This is function 2"<<endl;};
};
class Derived: public Base{
  public:
  void Fun4(){cout<<"This is the third function inside derived class"<<endl;}
  void Fun5(){cout<<"This is the fourth function inside derived class";}
};
    
int main(){
  // i can call also with this way of the pointer address:
  Derived d;
  Base *baseptr=&d;
  baseptr->Fun1();
  baseptr->Fun2();
  // ❌ but i can't call the derived class function with the pointer address baseptr:
  // p->fun3();
return 0;
}