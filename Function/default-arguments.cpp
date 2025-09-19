#include <iostream>
using namespace std;
int sum(int a, int b, int c=98){
  return a+b+c;
}

// i should make default args form right to left without skippign anny below is the error.
// int maxvalue(int a=0, int b, int c=0){
int maxvalue(int a=0, int b=0, int c=0){
  return a>b && a>c ? a: (b>c ? b : c);
}
int main(){
  int a=238, b=98724;
  cout<<sum(a, b)<<endl;

  cout<<maxvalue(10)<<endl;
  cout<<maxvalue(20, 10)<<endl;
  cout<<maxvalue(30, 10, 20);
return 0;
}