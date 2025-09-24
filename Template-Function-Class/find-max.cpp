#include <iostream>
using namespace std;
template<class C>
C Max(C x, C y){
  return x>y?x:y;
}
int main(){
  int a=298, b=238;
  cout<<Max(a, b);
return 0;
}