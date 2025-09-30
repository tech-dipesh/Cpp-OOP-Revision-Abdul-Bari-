#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  unordered_map<int, string>mp;
  mp.insert({10, "Dipesh"});
  mp.insert({29, "Rajesh"});
  mp.insert({35, "Sanju"});
  mp.insert({40, "Abiskar"});
  mp.insert({19, "Diwas"});
  mp.insert({19, "Susant"});
  mp.insert({19, "Rajan"});
  mp.insert({14, "Aakash"});
  mp.insert({17, "Pradip"});
  mp.insert({21, "Sagar"});
  mp.insert({26, "Samir"});
  // removing the value by the key not by valu but we also can do that.
  mp.erase(35);

  cout<<mp.count(19)<<" "<<endl;

  if(mp.find(14)!=mp.end()) cout<<"yes it exist. and their value is: ";
  cout<<endl;
  for(auto i:mp){
    cout<<"Key is: "<<i.first<<" ";
    cout<<"Value is: "<<i.second;
  }
  cout<<endl<<"Value of the unordered map: ";
  for(int i=0;i<mp.size();i++){
    cout<<mp[i]<<" ";
  }
  cout<<endl;
  // remove based on the key:
  mp.erase(17);
  
  // it will remove the first element:
  mp.erase(mp.begin());
  
return 0;
}