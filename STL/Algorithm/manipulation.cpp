// next_permutation(begin, end) → rearranges to next lexicographical order.
// prev_permutation(begin, end) → rearranges to previous order.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// on next lexiogaphical order:
void nextPermutation(vector<int>&vt){
    next_permutation(vt.begin(), vt.end());
    for(int i:vt)cout<<i<<" ";
}


void rearrangePreviousOrder(vector<int>&vt){
    prev_permutation(vt.begin(), vt.end());
    for(int i:vt)cout<<i<<" ";
}


// do random shuffling:
void randomShuffle(vector<int>vt){
    random_device randvalue;
    mt19937 valuerand(randvalue());
    shuffle(vt.begin(), vt.end(), valuerand);
    for(int i:vt)cout<<i<<" ";
}

// only for the unique element: with remove the duplicate:
void onlyUniqueSelct(vector<int>vt){
    auto iter=unique(vt.begin(), vt.end());
    vt.erase(iter, vt.end());
    for(int i:vt)cout<<i<<" ";
}



void replaceallMatchingElement(vector<int>rp){
    replace(rp.begin(), rp.end(), 64, 164);
    // replace the all 64 to 164.
    for(int i:rp)cout<<i<<" ";
}


// remove the 17 from the list.
void removeanyValue(vector<int>rp){
    remove(rp.begin(), rp.end(), 17);
}
int main(){
    vector<int>vt={45, 28, 17, 64, 24, 96, 7, 38, 13, 52, 20};
    cout<<"all permutation value: ";
    nextPermutation(vt);
    cout<<endl;
    rearrangePreviousOrder(vt);
    cout<<endl<<"Now random shuffle";
    
    randomShuffle(vt);
    
    vector<int>vres;
    
    cout<<endl<<"only unique value: "<<endl;
    
    vector<int>ut={45, 28, 17, 64, 24, 96, 7, 38, 13, 52, 20, 17, 13};
    sort(ut.begin(), ut.end());
    onlyUniqueSelct(ut);
    
    
    cout<<endl<<"Remove any value: "<<endl;
    vector<int>rv={45, 28, 17, 64, 24, 96, 7, 38, 13, 52, 20, 17, 13};
    removeanyValue(rv);
return 0;
}