// it use the pritoity queue to find largest element each time which use on the priority based scheduling and djaskra algorithm.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// create an entire heap
void CreatetheHeap(vector<int>&res){
  make_heap(res.begin(), res.end());
}

void pushHeap(vector<int>&res){
  push_heap(res.begin(), res.end()); 
}


// last ele remove first 50 then 38 like this.
int popHeap(vector<int>&res){
  pop_heap(res.begin(), res.end());
  int output=res.back();
  res.pop_back();
  return output;
}

// convert the heap into sorted array.
void sortHeap(vector<int>&res){
  sort_heap(res.begin(), res.end());
}
int main(){
  vector<int>li={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
  vector<int>heapmake={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
  
  CreatetheHeap(heapmake);
  for(int n:heapmake) cout<<n<<" ";
  
  vector<int>pheap;
  cout<<"now push heap any element.";
  pheap.push_back(39);
  pheap.push_back(40);
  pheap.push_back(7);
  pheap.push_back(33);
  pheap.push_back(4);
  pheap.push_back(75);
  pheap.push_back(42);
  pheap.push_back(55);
  pushHeap(pheap);

  CreatetheHeap(pheap);
  for(int n:pheap) cout<<n<<" ";
  
  vector<int>ppheap={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
  cout<<"only returning the Biggesr element every time.";
  cout<<popHeap(ppheap);
  
  // convert into sorted array:
  vector<int>sortheap={2, 9, 10, 1, 29, 30, 18, 50, 5, 21, 25, 30, 14, 35};
  sortHeap(sortheap);
  cout<<"Sorted heap is: ";
  for(int i:sortheap)cout<<i<<" ";
return 0;
}