#include <iostream>
using namespace std;
#include <map>
    
int main(){
  map<int, string>res;
  // can contain only unique keys which use internally hashtable, 
  res.insert({1, "Dipesh"});
  res.insert({2, "Rajan"});
  res.insert({3, "Biraj"});
  res.insert({14, "Rajan"});
  res.insert({3, "Biraj"});
  map<int, string>::iterator it;
  for(it=res.begin(); it!=res.end();it++){
    cout<<it->first<<"and value  is "<<it->second;
  }

  // accsing certain element:
  cout<<endl<<res[0]<<endl;
  cout<<"with at values: "<<res.at(2)<<endl;

  // udpate the certain element:
  res[3]="Updated name";

  // finding the values:
  if(res.find(2)!=res.end()){
     cout<<"Value is there: "<<endl;
    //  cout<<res->first;
  }

return 0;

}