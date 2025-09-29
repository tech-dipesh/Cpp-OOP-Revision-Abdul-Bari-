#include <bits/stdc++.h>
using namespace std;
    
int main(){
  vector<int>res={2, 9, 10, 1, 29, 30, 18, 50, 5, 30, 25, 30, 14, 35};
  cout<<res[2]<<endl;
  cout<<res.at(2)<<endl;
  cout<<res.front()<<endl;
  cout<<res.max_size()<<endl;
  
  res.push_back(39);
  // cout<<res.pop_back(5)<<endl;
  res.pop_back();
  auto fin=res.front();
  cout<<fin;
  cout<<res.capacity();
  // checking whether the vector is empty or not:
  vector<int>a;
  auto a1=a.empty()?888:99;
  a.push_back(35);
  a.push_back(14);
  a.push_back(52);
  a.push_back(37);
  a.push_back(75);
  a.push_back(12);
  cout<<a1;
  auto mxsze=a.max_size();
  cout<<endl<<mxsze<<endl;


  sort(res.begin(), res.end());
  reverse(a.rbegin(), a.rend());
  for(int i:res)cout<<i<<" ";
  for(int i:a)cout<<i<<" ";
return 0;
}