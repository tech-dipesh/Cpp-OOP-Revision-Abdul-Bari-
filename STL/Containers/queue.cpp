#include <iostream>
#include <queue>
using namespace std;
int main(){
  queue<int>st;
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
  
  st.pop();
  
 
  // checking whether the element exist or not:
  if(st.empty())cout<<"Stack is empty."<<endl;
  else cout<<endl<<"stil have some elements.";

return 0;
}