#include <iostream>
using namespace std;
class  Test{
  public:
  Test(){
    cout<<"Constructor is called."<<endl;
  }
  // ther cuold only one destructor would be.
  ~Test(){
    cout<<"Destructor is called.";
  }
};

// i can also test by the function call:
Fun(){
  Test t;
}
int main(){
  Test t;
return 0;
}