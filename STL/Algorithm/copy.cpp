#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void copyCondition( vector<int>vect, vector<int>res){
  copy_if(vect.begin(), vect.end(), res.begin(), [] (int x){return x%2==1;});
}

void copyBackward(const vector<int>vect,  vector<int>res){
  copy_backward(vect.begin(), vect.end(), res.begin());
}

void moveElements(const vector<int>vect,  vector<int>res){
  move(vect.begin(), vect.end(), res.begin());
}

void swapRange(vector<int>& vect,  vector<int>& res){
  swap_ranges(vect.begin(), vect.end(), res.begin());
}
int main(){
  vector<int>sec={19, 29, 156, 13, 17, 3, 167, 61, 72, 36, 23, 121};

  
  vector<int>fir={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
  vector<int>copycond;
  copyCondition(fir, copycond);
  for(int i:copycond)cout<<i<<" ";
  

  // i also can do the ranges such as:
  for(int i:fir)cout<<i<<" ";

  for(int i:sec) cout<<i<<" ";

return 0;
}