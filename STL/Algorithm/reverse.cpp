#include <bits/stdc++.h>
using namespace std;
void reverseEl(vector<int>&rev){
  reverse(rev.begin(), rev.end());
}

int main(){
  vector<int>rev={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
  reverseEl(rev);
  for(int i:rev)cout<<i<<" ";
  cout<<endl;
return 0;
}