#include <iostream>
using namespace std;
int &fun(int &x){
  cout<<x<<" ";
  return x;
}
int main(){
   int a=25;
   fun(a)=50;
   cout<<a; 
return 0;
}