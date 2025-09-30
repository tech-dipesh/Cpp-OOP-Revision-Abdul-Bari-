#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
  // only unique values no keys:
  unordered_set<string>us;
  us.insert("Dipesh");
  us.insert("Rajesh");
  us.insert( "Sanju");
  us.insert("Abiskar");
  us.insert( "Diwas");
  us.insert("Susant");
  us.insert("Rajan");
  us.insert("Aakash");
  us.insert("Pradip");
  us.insert("Sagar");
  us.insert("Samir");
  // removing the value by the key not by valu but we also can do that.
  us.erase("Samir");

  cout<<"Size is: "<<us.size()<<" "<<endl;
  if(us.find("Susant")!=us.end()) cout<<"yes it exist."<<endl;
  
  
  // firste element:
  us.erase(us.begin());
  us.erase("Aakash");

  for(string i:us)cout<<i<<" ";
return 0;
}