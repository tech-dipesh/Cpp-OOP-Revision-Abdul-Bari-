#include <iostream>
using namespace std;
int main(){
   string st="dipesh is the way to solve the problem on the dsa ok is that true.";
    // with the string ways:
    for(int i=0;st[i]!='\0';i++){
        if(st[i]!=32)
      st[i]=st[i]-32;
    }
    cout<<st<<endl;

    // now lower case:
    string second="ITS JUST THE LOWE CASE VALUE CAN YOU CHECK THIS IS THE CORRECT WAY TO DO IT OR NOT ELSE I CAN DO WITH THE ITERATOR WAYS";
    for(int i=0;second[i]!='\0';i++) {
    if(second[i]!=32)
        second[i]=second[i]+32;
  }
  // now with rhe iterator ways to make lower or upper case:
  string first="Dipesh shamr ji ka beta is good ok maybe not or that is good.";
  string::iterator val;
  // for(int val=first.begin();val!=first.end();val++){
  //     if(first>65 &&first<97)

  // }
  
    cout<<second<<endl;
    string name="d p e";
    int res=0;
return 0;
}