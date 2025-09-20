#include <iostream>
using namespace std;
int main(){
    
  string val="Dipesh Wordl";
  string::iterator it;
  // iterating the entire string withe the iterator:
  for(it=val.begin();it!=val.end();it++) 
      cout<<*it;
  cout<<endl;
// add +3 as a value:
  for(it=val.begin();it!=val.end();it++){
    cout<<*it+3<<" ";
  }

cout<<endl;

  string name="dipesh";
  
  
  // making all capital letter:
  for(it=name.begin();it!=name.end();it++){
    // *it-=32;
    *it=*it-32;
  }
  cout<<name;
cout<<endl;
// string l="Checking value";
  string::reverse_iterator ita;
  // reverse the string with the iterator:
  for(ita=name.rbegin();ita!=name.rend();ita++)
      cout<<*ita;



string school="Dhaulagiri primary scool";
for(int i=0;school[i]!='\0';i++)
    cout<<school[i];
  
return 0;
}