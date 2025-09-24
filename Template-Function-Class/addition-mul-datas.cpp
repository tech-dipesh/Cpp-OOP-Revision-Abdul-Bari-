#include <iostream>
using namespace std;
// it can take the multple data types.
   template<class I, class D>
   D Addition(I a, D b){
      return a+b;
   }
int main(){
   int a=289239;
   double b=293823.823;
   cout<<Addition(a, b);
   // Addition(a, b);
return 0;
}