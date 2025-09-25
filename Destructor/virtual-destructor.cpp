#include <iostream>
using namespace std;
class  Test{
  public:
  Test(){
    cout<<"Parent Constructor is called."<<endl;
  }
  // this is the desturctor.
  virtual ~Test(){
    cout<<"Parent Destructor is called."<<endl;
  }
};

class ChildTest: public Test{
  public:
  ChildTest(){
    cout<<"Child Constructo called:"<<endl;
  }
  // this is the desturctor.
virtual ~ChildTest(){
    cout<<"Child Destructor Called."<<endl;
  }
};





int main(){
  ChildTest c;
  // now the output would be:  base const, derivec const, derived dest, base dest.

  cout<<endl<<endl;
  
  // now this the parenet dest  called first due .
  Test *t=new ChildTest();

  // the destructor would call every time at the end of the int main call.
return 0;
}