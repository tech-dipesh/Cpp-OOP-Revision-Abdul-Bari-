#include <iostream>
using namespace std;
class T{
  public:
  int data;
  T(int data){
    // this data of that same object can insert
    this->data=data;
  }
  void test(){
    cout<<"Thsi pointer";
  }
};
int main(){
    T tt(20);
    tt.data=2984;
tt.test();
return 0;
}