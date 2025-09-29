#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
  // only collection of unqieue elements.
  multiset<int>ms;
  ms.insert(2);
  ms.insert(5);
  ms.insert(9);
  ms.insert(9);
  ms.insert(19);
  ms.insert(38);
  ms.insert(48);
  // int c=ms.count()
  // cout<<c;
  // int::iterator it;
  set<int>::iterator it;
  for(it=ms.begin();it!=ms.end();it++){
    cout<<*it<<" ";
  }
  // can have duplicae of sma element.

  // checking whtehr element is exist or not:
  if(ms.find(19)!=ms.end()) cout<<"yes it exist that element."<<endl;
  
  ms.erase(8);
}