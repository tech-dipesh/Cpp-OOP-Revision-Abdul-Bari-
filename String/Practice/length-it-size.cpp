#include <iostream>
using namespace std;
int main(){
   string st="This is for checking the size of the string for practice problem with both ways class string, and also with iterator ways.";
   cout<<"With string size"<<st.size()<<endl;
   
  //  iterator value:
  string::iterator it;
  int count=0;
  for(it=st.begin();it!=st.end();it++)
      count++;
  cout<<"with iterator size"<<count;
return 0;
}