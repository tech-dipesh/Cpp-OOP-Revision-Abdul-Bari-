#include <iostream>
#include <stack>
using namespace std;
int main(){
  stack<int>st;
  st.push(2);
  st.push(27);
  st.push(19);
  st.push(13);
  st.push(15);
  st.push(5);
  st.push(23);
  st.push(63);
  st.push(42);
  st.push(56);
  
  int tp=st.top();
  st.pop();
  cout<<tp<<endl;
  
  for(int i=0;i<st.size();i++){
    cout<<st.top()<<" ";
      st.pop();
  }
  // checking whether the el.:
  if(st.empty())cout<<"Stack is empty."<<endl;
  else cout<<endl<<"stil have some elements.";

  // how to use the emplace 

  
  int val=25;
  swap(st.top(), val);
  int sz=st.size();
  cout<<endl<<sz<<endl;
return 0;
}