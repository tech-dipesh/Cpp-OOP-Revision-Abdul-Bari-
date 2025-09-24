// There are around 5 to 6 types of the const namespaces: 
#include <iostream>
using namespace std;
    
int main(){
  const int x=283;
  cout<<x<<endl;
  // x++; ❌ i can't modify the const qualitifer variable.
  int a=293;


  // II:
  const int *ptr=&a;
  cout<<ptr<<endl;
  *ptr++;
  // new modified address
  cout<<ptr;
  cout<<a;


  // III:
  // int b=8293;
  // int const *newptr=&a;
  // int y=20;
  // newptr=y;
  // cout<<newptr;


  // IV:
  // we can't modify it:
  // int x=2389;
  // int *const pointer=&x;
  // x++;
  // cout<<x;

  // i also can't access the : int *const pointer=x;

return 0;
}