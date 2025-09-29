#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
  // only collection of unqieue elements.
  set<int>res;
  res.insert(2);
  res.insert(5);
  res.insert(9);
  // can't again store the 9 value: res.insert(9);
  res.insert(19);
  res.insert(38);
  res.insert(48);
  // int c=res.count()
  // cout<<c;
  // int::iterator it;
  set<int>::iterator it;
  for(it=res.begin();it!=res.end();it++){
    cout<<*it<<" ";
  }

  // with also count which interanly use the red black tree:
  if(res.count(19)){
    cout<<"19 is exist.";
  }

  // checking whtehr element is exist or not:
  if(res.find(19)!=res.end()) cout<<"yes it exist that element."<<endl;
  
  res.erase(8);
}