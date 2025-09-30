#include <iostream>
#include <iterator>
#include <set>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  // set<string>res="Dipesh sharma is the quite random person i've ever met, which i've feel lucky to meet him, hope we can meet again.";
  set<int>res={82, 24, 15, 75, 83, 37};
  // set<int>::iterator it;
    set<int>::iterator first=res.begin();
  
      while(first!=res.end()){
        cout<<*first<<" ";
          first++;
      }
return 0;
}