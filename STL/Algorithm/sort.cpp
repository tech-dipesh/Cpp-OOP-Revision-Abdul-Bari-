// Rotates elements around a position
// rotate(v.begin(), v.begin()+2,v.end());

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;

// it takes the o (nlogn):
void sortAssending(vector<int>&sorta){
  sort(sorta.begin(), sorta.end());
  cout<<"Sort in ascending Order: ";
    for(int i:sorta)cout<<i<<" ";
    
}


// it's same as sort but the duplicate element will be on the same order:
void stableSort(vector<int>&sorta){
  stable_sort(sorta.begin(), sorta.end());
  cout<<endl<<"Stable order which preserve the duplicate order: ";
   for(int i:sorta) cout<<i<<" ";
}


// only range will be sorted for ex: 2 5 8 then the starting indexx of 2 to till i, with 5 part of it.
void PartialSort(vector<int>&part){
  partial_sort(part.begin(), part.begin()+5, part.end());
    cout<<endl<<"Range Baed Sorting ";
        for(int i:part)cout<<i<<" ";
}
// rearragen that some index so it can be on the sorted poistion.
void rearrangeCorrectPosition(vector<int>&rear){
  nth_element(rear.begin(), rear.begin()+7, rear.end());
    cout<<endl<<"Rearrange to correct position: ";
     for(int i:rear)cout<<i<<" ";
}


bool isSortedChecking(vector<int>&val){
  int res=is_sorted(val.begin(), val.end());
  if(res) return true;
  else return true;
}



// it will rotate a element around that posistion:
// like +2 to till end value.
void rotateList(vector<int>&rot){
  rotate(rot.begin(), rot.begin()+2,rot.end());
  cout<<endl<<"rotate some part of element: ";
     for(int i:rot)cout<<i<<" ";
}


int main(){
  vector<int>li={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
     
  vector<int>sorta={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
 sortAssending(sorta);
   
    
  vector<int>stablesort={2, 9, 10, 1, 29, 14, 18, 50, 5, 21, 25, 30, 14, 35};
  stableSort(stablesort);
   
    vector<int>partsort={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
    PartialSort(partsort);

    
    
  
    vector<int>rearr={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
    rearrangeCorrectPosition(rearr);
   
    
    //  checking is this sorted r not with the true false.
    cout<<endl<<"Checking Whether the element is sorted or not: ";
    vector<int>checkingsortedunsorted={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
    // cout<<isSortedChecking(checkingsortedunsorted)?"Yes it's sorted of the checking sorted": "No it's not sorted."<<endl;
    cout<<isSortedChecking(checkingsortedunsorted)?1:0;
    
    vector<int>rotatesomeEl={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
    rotateList(rotatesomeEl);
 
    
    return 0;
}