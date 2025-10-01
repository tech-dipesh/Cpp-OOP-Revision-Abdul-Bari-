#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

    
int main(){
  int val=23983;
  cout<<"size of integar is:"<<sizeof(val)<<endl;
  bool boolean(2);
  cout<<"iNTEGAR  min max size: "<<INT_MIN<<" "<<INT_MAX<<endl;
  cout<<"size of Boolean is:"<<sizeof(boolean)<<endl;
  char name='H';
  cout<<"size of Character is:"<<sizeof(name)<<endl;
  
  unsigned char unsignchar;
  cout<<"size of Unsigned Char is:"<<sizeof(unsignchar)<<endl;
  cout<<"character min max size: "<<CHAR_MIN<<" "<<CHAR_MAX<<endl;
  
  short sh=9283;
  cout<<"size of Short int is:"<<sizeof(sh)<<endl;
  
  long lint=927490242l;
  cout<<"Long min max size: "<<LONG_MIN<<" "<<LONG_MAX<<endl;
  long long llint=9274907248239l;
  cout<<"Long long min max size: "<<LONG_LONG_MIN<<" "<<LONG_LONG_MAX<<endl;
  float floatingsize=9829470274.982f;
  cout<<"Size of float is: "<<sizeof(floatingsize)<<endl;
  double dbl=89247204702.92749247f;
  cout<<"Size of double is: "<<sizeof(dbl)<<endl;
  long double longdouble=927490724242947024229374294.2974329;
  cout<<"Size of long double is: "<<sizeof(longdouble)<<endl;


return 0;
}