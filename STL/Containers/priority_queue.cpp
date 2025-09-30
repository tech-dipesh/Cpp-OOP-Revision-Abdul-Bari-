#include <iostream>
#include <queue>
using namespace std;
    
int main(){
  // select only biggest element each time:
  priority_queue<int>deq;
  deq.push(2);
  deq.push(9);
  deq.push(30);
  deq.push(48);
  deq.push(38);
  deq.push(15);
  deq.push(23);
  deq.push(41);
  deq.push(39);
  deq.push(75);
  deq.push(45);
  deq.push(98);
  deq.push(67);
  deq.push(40);
  deq.push(56);
  deq.push(42);
  deq.push(48);
  deq.push(28);
  for(int i=0, n=deq.size();i<n;i++){
    int res=deq.top();
    cout<<res<<" ";
    deq.pop();
  }
  
  cout<<endl;
  cout<<"now white loop appraoch: "<<endl;
  // or i can also use this appraoch:
  priority_queue<int>sdeq;
  sdeq.push(52);
  sdeq.push(25);
  sdeq.push(38);
  sdeq.push(42);
  sdeq.push(28);
  sdeq.push(53);
  sdeq.push(85);
  sdeq.push(58);
  sdeq.push(19);
  sdeq.push(28);
  sdeq.push(35);
  sdeq.push(54);
  sdeq.push(62);
  sdeq.push(48);
  sdeq.push(12);
  sdeq.push(19);
  
  while(!sdeq.empty()){
    cout<<sdeq.top()<<" ";
    sdeq.pop();
  }
  return 0; 
}