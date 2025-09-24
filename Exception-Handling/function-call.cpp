#include <iostream>
using namespace std;
    
int fun(int a, int b){
  if(b%2==1) throw 201;
  return (a*b)+(a-b)/b;
}
int main(){
  // exception handling mostly useful on the function:
  int x=2384, y=24973, z;
  try
  {
    z=fun(x, y);
    cout<<z;
  }
  catch(int err){
    cout<<"Error while perfomring the operation: "<<err;
  }
  
  
return 0;
}