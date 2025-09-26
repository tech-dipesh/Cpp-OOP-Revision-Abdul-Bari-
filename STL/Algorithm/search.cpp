#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// check whether value exist or not:
bool valueExist(vector<int>res, int val){
  auto output=find(res.begin(), res.end(), val);
  return output!=res.end();
}

int totalCount(vector<int>res, int val){
  int tot=count(res.begin(), res.end(), val);
  return tot;
}
// first elmenet of the matching condition.
int findFirstelement(const vector<int>&res){
  return find_if(res.begin(), res.end(), [] (int a){return a>10;})!=res.end();
}


int totalCountCondition(vector<int>&res){
  return count_if(res.begin(), res.end(), [] (int x){return x>10;});
}

int findTotalSum(vector<int>res){
  return accumulate(res.begin(), res.end(), 0);
}

int main(){
  // Linear Search 
    vector<int>li={2, 9, 10, 1, 29, 30, 18, 50, 5, 30, 25, 30, 14, 35};
    
    int check=25;
    int dupvalue=30;
    cout<<valueExist(li, check)<<endl;
    cout<<totalCount(li, dupvalue)<<endl;
    cout<<findFirstelement(li);
    cout<<endl<<"Total count based on the condition:"<<endl;;
    cout<<totalCountCondition(li)<<endl;


    // total sum:
    cout<<"Total sum is: "<<findTotalSum(li);
return 0;
}