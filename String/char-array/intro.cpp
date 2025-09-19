#include <iostream>
using namespace std;
int main(){
    //1st way to represent string:
  char x='A'; 
  cout<<x<<endl;
  // 2nd ways:
  char s[10]="Help";
  cout<<s<<endl;
  // 3rd ways:
  char b[]="By Function";
  cout<<b<<endl;
  // 4th ways with the ascie values:
  char c[]={65, 66, 67, 68};
  cout<<c<<endl;
  // with the pointer creating on the heap rather than the stack:
  // don't allow rather than use the string class;
  char *d="Friend";
  cout<<d;
return 0;
}