#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

    
int main(){
  set<int>a1={2, 7, 8, 10, 12, 13, 17, 21,  25, 31, 32, 33, 37};
  set<int>a2={45, 28, 17, 64, 24, 96, 7, 38, 13, 52, 20, 17, 13};
  set<int>a3;
  // sort(a1.begin(), a1.end());
  // sort(a2.begin(), a2.end());
  merge(a1.begin(), a1.end(), a2.begin(), a2.end(), inserter(a3, a3.begin()));
  for(int i:a3)cout<<i<<" ";
return 0;
}