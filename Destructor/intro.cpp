#include <iostream>
using namespace std;
class  Test{
  public:
  Test(){
    cout<<"Constructor is called."<<endl;
  }
  // this is the desturctor, which release the resources that acquired by the constructor or any other variable.
  ~Test(){
    cout<<"Destructor is called.";
  }
};

int main(){
  Test t;
}