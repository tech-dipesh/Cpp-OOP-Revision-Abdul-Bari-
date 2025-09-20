#include <iostream>
using namespace std;
string check(string val){
  int start=0, end=val.size()-1;
  while(start<end){
    // if(val.at(start)!=val.at(end))
    if(val[start]!=val[end])
      return "False";
    start++;
    end--;
  }
  return "True";
}
int main(){
   string st="Dipesh";
   string first="Love";
   string second="helleh";
   string third="uuuuu";
    cout<<check(st)<<endl;
    cout<<check(first)<<endl;
    cout<<check(second)<<endl;
    cout<<check(third)<<endl;
return 0;
}