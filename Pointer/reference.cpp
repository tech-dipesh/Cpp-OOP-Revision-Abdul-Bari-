#include <iostream>
using namespace std;
int main(){
  int x=13;
  int &y=x;
  y++;
  x++;
  int b=20;
  // it's wrong variable as we can't declare the twice variable:
  &y=b;
  // next value of the pointer of int of 2 mean 13 to 15.
  cout<<y<<endl;
  // printing the value of y and x as it is just the nickname of the value:
  cout<<x<<endl;
  cout<<&x<<endl<<&y<<endl;
return 0;
}