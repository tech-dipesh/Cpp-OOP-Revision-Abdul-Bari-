#include <iostream>
using namespace std;
struct Tree{
  int data;
  int Print(){
    return data+5;
  }
};
int main(){
    Tree t;
    t.data=84234;
    cout<<t.Print();
return 0;
}