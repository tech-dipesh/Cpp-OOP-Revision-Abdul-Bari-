#include <iostream>
using namespace std;
   // key manipulator that i will be using end line, oct, hext, decimal, float, exponenet mantissa, set ws as a white space and otehr such as left right.
   int main(){
  cout<<'\n'<<"second line"<<'\n'; 

  // number system:
  int variable=98238;
  cout<<dec<<variable<<endl;
  cout<<oct<<variable<<endl;
  cout<<hex<<variable<<endl;

  // float:
  float js=92382.238f;
  cout<<fixed<<js;
  
  // now scientific value::
  // i don't know the scietific .



  // now the set value which goes to specific length, and also white space:
  string t="Hi";
  cout<<set(5)<<t;

  cout<<10<<ws<<20;
return 0;
}