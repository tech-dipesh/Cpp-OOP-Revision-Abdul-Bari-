#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
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
  // can have duplicae of same element.

  // checking whtehr element is exist or not:
  if(ms.find(19)!=ms.end()) cout<<"yes it exist that element."<<endl;
  
  if(ms.count(19)){
    cout<<"19 is exist on that set element that i find from the multiset with red black tree which it internally use"
  }
  ms.erase(8);
}