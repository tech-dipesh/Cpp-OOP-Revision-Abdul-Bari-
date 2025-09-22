#include <iostream>
using namespace std;
class Parent{
  public:
  Parent(){
    cout<<"Default Parent base class"<<endl;
  }
  Parent(int a){
      cout<<endl<<"Param of Parent base class"<<endl;
  }
};
class Child:public Parent{
  public:
  Child(){
    cout<<"Deafult Child Derived class";
  }
  Child(int a){
    cout<<endl<<"Param of Child Derived class"<<endl;
  }
  Child(int a, int b):Parent(b){
    cout<<endl<<"Param of Child Derived class"<<endl;
  }
};
int main(){
  Child c(20, 49);
  // Parent p;
return 0;
}