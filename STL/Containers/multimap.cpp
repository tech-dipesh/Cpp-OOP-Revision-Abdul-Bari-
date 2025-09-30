#include <iostream>
#include <map>
using namespace std;
    
int main(){
  // same as map but it can contain a duplicate keys but not duplicate values, use the hashmap interanally:
    multimap<int, string>mm;
  mm.insert({1, "Dipesh"});
  mm.insert({2, "Rajan"});
  mm.insert({14, "Rajan"});
  mm.insert({3, "Biraj"});
  mm.insert({3, "Biraj"});
  // mm.begin({29, "Abishkar"});
  multimap<int, string>::iterator it;
  for(it=mm.begin(); it!=mm.end();it++){
    cout<<it->first<<"and value  is "<<it->second;
  }

  // vaue access:
  multimap<int, string>::iterator it;
  for(it=mm.begin(); it!=mm.end();it++){
    cout<<"First Element:"<<it->first<<" ";
    cout<<"Second element: "<<it->second<<" ";
  }
  
return 0;
}