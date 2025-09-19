#include <iostream>
using namespace std;
int main(){
   int x=10;
  //  initiliaze the pointer
   int *p;
   p=&x;
  
cout<<x<<endl;
// printing the address of the p 
cout<<p<<endl;
// address of the value p different compare to x address as p also have own address.
cout<<*p<<endl;
// derefering or accessing the data where is it pointing which print 10 
cout<<&p<<endl;
return 0;
}