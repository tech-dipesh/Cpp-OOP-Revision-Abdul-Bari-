#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&vect, int val){
  return binary_search(vect.begin(), vect.end(), val);
    }



// condition satisfy how many times likes h>10 5 times like this:
int countCondition(vector<int>res, int val){
  count_if(res.begin(), res.end(), [](int a){return a>10;});
}



// create an entire heap
void CreatetheHeap(vector<int>&res){
  make_heap(res.begin(), res.end());
}

// last ele remove first 50 then 38 like this.
int popHeap(vector<int>&res){
 pop_heap(res.begin(), res.end());
  int output=res.back();
  res.pop_back();
  return output;
}


// only for the unique element: with remove the duplicate:
void onlyUniqueSelct(vector<int>vt){
    auto itr=unique(vt.begin(), vt.end());
    vt.erase(itr, vt.end());
    for(int i:vt) cout<<i<<" ";
    cout<<endl;
}


void replaceallMatchingElement(vector<int>rp){
    replace(rp.begin(), rp.end(), 64, 164);
    for(int i:rp)cout<<i<<" ";
    cout<<endl;
}


// check whether value exist or not:
bool valueExist(vector<int>res, int val){
  auto output=find(res.begin(), res.end(), val);
  return output!=res.end();
}

int totalCount(vector<int>res, int val){
  int tot=count(res.begin(), res.end(), val);
  return tot;
}



// .begin() is an iterator and it point on existin element so we'ev to use the inserter to start stres from starting.
 void findUnino( set<int>st, set<int>st1){
   set<int>stres;
    set_union(st.begin(), st.end(), st1.begin(), st1.end(), inserter(stres, stres.begin()));
    cout<<endl<<"now the setunion: "<<endl;
     for(int n:stres) cout<<n<<" ";
    }


    // it takes the o (nlogn):
void sortAssending(vector<int>&sorta){
  sort(sorta.begin(), sorta.end());
  cout<<endl<<"now by the ascending order: "<<endl;
  for(int i:sorta) cout<<i<<" ";
}


int main(){
    vector<int>vect={1, 2, 5, 9, 10, 14, 18, 21, 25, 29, 30, 30, 35, 50,};
  int value=14;
  cout<<binarySearch(vect, value)<<endl;




  cout<<endl<<"now it's a count condition: "<<endl;
      vector<int>li={2, 9, 29, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 29, 14, 35};
    int condcheck=10;
    cout<<countCondition(li, condcheck);



    vector<int>pheap={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
  CreatetheHeap(pheap);
  for(int n:pheap) cout<<n<<" ";
  
  vector<int>ppheap={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
  cout<<"only returning the Biggesr element every time.";
  cout<<popHeap(ppheap);


    vector<int>ut={45, 28, 17, 64, 24, 96, 7, 38, 13, 52, 20, 17, 13};
    onlyUniqueSelct(ut);



    vector<int>vt={1, 2, 5, 9, 10, 14, 18, 21, 25, 29, 30, 30, 35, 50,};
    // find the minimum element:
    int minel=*min_element(vt.begin(), vt.end());


    // Linear Search 
    vector<int>linear={2, 9, 10, 1, 29, 30, 18, 50, 5, 30, 25, 30, 14, 35};
    int check=25;
    int dupvalue=30;
    cout<<endl<<"Linear seach checking whether value is exist or not: "<<endl;
    cout<<valueExist(linear, check)<<endl;
    cout<<"Total times count how many it exist."<<endl;
    cout<<totalCount(linear, dupvalue)<<endl;



    set<int>st={1, 2, 5, 9, 10, 14, 18, 21, 25, 29, 30, 30, 35, 50,};
    set<int>st1={2, 7, 8, 10, 12, 13, 17, 21,  25, 31, 32, 33, 37};
    findUnino (st, st1);
   
    
    vector<int>sorta={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
   sortAssending(sorta);
   
     

     cout<<endl<<"Merge Sort: "<<endl;
  set<int>a1={2, 7, 8, 10, 12, 13, 17, 21,  25, 31, 32, 33, 37};
  set<int>a2={45, 28, 17, 64, 24, 96, 7, 38, 13, 52, 20, 17, 13};
  set<int>a3;
  merge(a1.begin(), a1.end(), a2.begin(), a2.end(), inserter(a3, a3.begin()));
  for(int i:a3)cout<<i<<" ";
    

return 0;
}