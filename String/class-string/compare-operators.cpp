#include <iostream>
using namespace std;
int main(){
  string a="Dipeesh";
  // same like a[3]
  cout<<a[3];
cout<<a.at(3)<<endl;

// accessing the first element:
cout<<a.front()<<endl;
// last:
cout<<a.back()<<endl;

string b="Dipesh";
string c="Sharma";
cout<<b+c<<endl;

// =operator:
string d=b;
cout<<d;

return 0;
}