#include <iostream>
using namespace std;
int minimum(int a, int b){
  return a<b?a:b;
}
int maximum(int a, int b){
  // cout<<a>b?a:b;
  return a>b?a:b;
}
int main(){
    int (*fnptr) (int, int);
   fnptr=maximum;
   int maxres=(*fnptr)(20, 35);
   fnptr=minimum;
   int minres=(*fnptr)(53, 98);
   cout<<maxres<<"minimum: "<<minres;
return 0;
}