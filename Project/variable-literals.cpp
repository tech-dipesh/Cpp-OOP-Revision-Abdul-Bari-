#include <iostream>
using namespace std;
    
int main(){
  int a=52;
  int b=012;
  int c=0x41;
  int d=0xd5c;
  cout<<"Decimal is"<<a<<"Octa is: "<<b<<"Hexa is"<<d;

  // can also declare with this ways, valid:
  int milsecond=1;
  int microsecond(2);
  int second=(3);
  int hour{5};
  int minute={4};

  // auto correct it's type:
  int f=9832.23;
  cout<<endl<<f<<endl;

  long fpoint=3.26e7l;
  cout<<"Floating point value: "<<fpoint<<endl;

  cout<<"Declare the char with both ways char and ascii:";
  char ch='D';
  char chascii=68;
  cout<<ch<<" "<<chascii<<endl;
return 0;
}