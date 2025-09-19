#include <iostream>
using namespace std;
int sum(int a, int b){
  return a+b;
}
// this is invalid/wrong: ❌ it's because it's a params conflict the return type doesn't matter
// float sum(int a, int b){
//   return a+b;
// }
int sum(int a, int b, int c){
  return a+b+c;
}

float sum(float a, float b){
  return a+b;
}
int main(){
  // sum of two int:
  int a=23, b=82, c=98;
  float f=22.988, g=983.82;
  int d=sum(a, b);
  cout<<d<<endl;
  int e=sum(a, b, c);
  cout<<e<<endl;

  float i=sum(f, g);
  cout<<i;
return 0;
}