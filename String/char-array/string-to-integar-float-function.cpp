#include <iostream>
using namespace std;
int main(){
  // string to the intergar value:
  char first[]="123455";
  char second[]="857.24";
  // long int a=strtol(first, nullptr, 10);
  cout<<(strtol(first, nullptr, 10))+7<<endl;
  float b=strtof(second, nullptr);
  // convert the string into the float
  cout<<b-72<<endl;
  // cout<<strtol(first, second);
return 0;
}