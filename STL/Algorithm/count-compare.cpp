#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
   // count how many times that value exist on o(n)
int totalCount(vector<int>res, int val){
  int output=count(res.begin(), res.end(), val);
  return output;
}

// condition satisfy how many times likes h>10 5 times like this:
int countCondition(vector<int>res, int val){
  count_if(res.begin(), res.end(), [] (int a){return  a>10;});
  // return output;
}

bool CheckEqualCond(vector<int>x, vector<int>c){
  return equal(x.begin(), x.end(), c.begin());
}
int main(){
    vector<int>li={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
    int check=25;
    cout<<totalCount(li, check)<<endl;
    cout<<countCondition(li, check)<<endl;


  vector<int>b1={18, 21, 30, 45};
  vector<int>b2={30, 21, 45, 18};
  vector<int>b3={30, 11, 35, 18};

  if(CheckEqualCond(b1, b2)) cout<<"both are equal";
 else  cout<<"Both value aren't equal."<<endl;
return 0;
}