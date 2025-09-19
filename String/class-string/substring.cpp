#include <iostream>
using namespace std;
int main(){
   string ss="Substring value of the right low.";
  //  give the substring from that index to till last:
  cout<<ss.substr(5)<<endl;
  cout<<ss.substr(2, 7)<<endl; 
  // portion of the string value:
  string a="Dipesh";
  string b="dipesh";
  cout<<a.compare(b)<<endl;
  cout<<b.compare(a)<<endl;

  string c="Hellow";
  string d="World";
  cout<<d.compare(c)<<endl;
return 0;
}