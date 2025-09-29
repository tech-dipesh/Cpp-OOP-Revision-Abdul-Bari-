#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
  void findUnino(vector<int>&vec, vector<int>&vec1, vector<int>&vectres, set<int>&st, set<int>st1, set<int>&stres){
    set_union(vec.begin(), vec.end(), vec1.begin(), vec1.end(), inserter(vectres, vectres.begin()));
    set_union(st.begin(), st.end(), st1.begin(), st1.end(), inserter(stres, stres.begin()));
    }
   
    void findDifference(vector<int>&vec, vector<int>&vec1, vector<int>&vtint, set<int>&st, set<int>st1, set<int>&stint){
        set_difference(vec.begin(), vec.end(), vec1.begin(), vec1.end(), inserter(vtint, vtint.begin()));
        set_difference(st.begin(), st.end(), st1.begin(), st1.end(), inserter(stint, stint.begin()));
    }
   

int main(){
  vector<int>vt={1, 2, 5, 9, 10, 14, 18, 21, 25, 29, 30, 30, 35, 50,};
    vector<int>vt1={2, 7, 8, 10, 12, 13, 17, 21,  25, 31, 32, 33, 37};
    set<int>st={10, 35, 5, 19, 10, 63, 18, 73, 48, 29, 30, 41, 7, 34};
    set<int>st1={79, 7, 8, 10, 42, 13, 51, 21,  37, 31, 32, 56, 20};
    

    vector<int>vtres;
    set<int>stres;
    findUnino(vt, vt1, vtres, st, st1, stres);
    cout<<"Union between two is: ";
    cout<<endl<<"Vector elements: ";
    for(int n:vtres) cout<<n<<" ";
    cout<<endl<<"Set elements: ";
    for(int n:stres) cout<<n<<" ";
    
    
    
    
    cout<<endl<<"Difference between two: ";
    vector<int>vtcommon;
    set<int>stcommon;
    findDifference(vt, vt1, vtcommon, st, st1, stcommon);
    cout<<endl<<"Vector elements: ";
    for(int n:vtcommon) cout<<n<<" ";
    cout<<endl<<"Set elements: ";
  for(int n:stcommon) cout<<n<<" ";
  
  

return 0;
}