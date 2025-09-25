#include <iostream>
using namespace std;
class  Test{
  public:
  Test(){
    cout<<"Parent Constructor is called."<<endl;
  }
  // this is the desturctor.
  ~Test(){
    cout<<"Parent Destructor is called."<<endl;
  }
};

class ChildTest: public Test{
  public:
  ChildTest(){
    cout<<"Child Constructo called:"<<endl;
  }
  // this is the desturctor.
  ~ChildTest(){
    cout<<"Child Destructor Called."<<endl;
  }
};



class  Parent{
  public:
  Parent(){
    cout<<"2nd Parent Constructor is called."<<endl;
  }
  // this is the desturctor.
  ~Parent(){
    cout<<"2nd Parent Destructor is called."<<endl;
  }
};

class Child: public Parent{
  public:
  Child(){
    cout<<"2nd Child Constructo called:"<<endl;
  }
  // this is the desturctor.
  ~Child(){
    cout<<"2nd Child Destructor Called."<<endl;
  }
};


int main(){
  ChildTest c;
  // now the output would be:  base const, derivec const, derived dest, base dest.

  cout<<endl<<endl;
  // ChildTest *p=new Test();
  Parent *p=new Child();

  delete p;
return 0;
}