#include <iostream>
using namespace std;
int main(){
   int x=234;
   auto abcd=[&](){
      return x+9823;
   };
   cout<<abcd()<<" "<<x<<endl;
return 0;
}