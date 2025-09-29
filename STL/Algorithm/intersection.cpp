#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 void findIntersection(vector<int>&vec, vector<int>&vec1, vector<int>&vtint, set<int>&st, set<int>st1, set<int>&stint){
      set_intersection(vec.begin(), vec.end(), vec1.begin(), vec1.end(), inserter(vtint, vtint.begin()));
      set_intersection(st.begin(), st.end(), st1.begin(), st1.end(), inserter(stint, stint.begin()));
    }
 void notCommon(vector<int>&vec, vector<int>&vec1, vector<int>&vectres, set<int>&st, set<int>st1, set<int>stres){
        set_symmetric_difference(vec.begin(), vec.end(), vec1.begin(), vec1.end(), inserter(vectres, vectres.begin()));
        set_symmetric_difference(st.begin(), st.end(), st1.begin(), st1.end(), inserter(stres, stres.begin()));
    }
int main(){
  
vector<int>vt={1, 2, 5, 9, 10, 14, 18, 21, 25, 29, 30, 30, 35, 50,};
vector<int>vt1={2, 7, 8, 10, 12, 13, 17, 21,  25, 31, 32, 33, 37};
set<int>st={1, 2, 5, 9, 10, 14, 18, 21, 25, 29, 30, 30, 35, 50,};
set<int>st1={2, 7, 8, 10, 12, 13, 17, 21,  25, 31, 32, 33, 37};

  cout<<"now the intersection."<<endl;
  vector<int>vtint;
  set<int>stint;
  findIntersection(vt, vt1, vtint, st, st1, stint);
  for(int n:vtint) cout<<n<<" ";
  for(int n:stint) cout<<n<<" ";

  
  cout<<endl<<"Have on a not on b., WHICH IS "<<endl;
  vector<int>vtsym;
  set<int>stsym;
  notCommon(vt, vt1, vtsym, st, st1, stsym);
for(int n:vtsym) cout<<n<<" ";
for(int n:stsym) cout<<n<<" ";


return 0;
}