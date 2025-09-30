#include <iostream>
#include <deque>
using namespace std;
#include <algorithm>
void Dequeulist(){
  
}
int main(){
  // double ended vector which we can we can do operation on vectro from both way.
  deque<int>dq;
dq.push_front(57);
dq.push_back(75);
dq.push_back(82);
dq.push_back(35);
dq.push_back(92);
dq.push_back(46);


// now for accessing the element:
int fr=dq.front();
int br=dq.back();
cout<<fr<<endl;
cout<<br<<endl;
// capacity, empty, max size, sort, reverse.
string checkcap=dq.empty()?"Yes dq is empty":"No it's not empty";
cout<<checkcap;

int maxsize=dq.max_size();
cout<<endl<<"max size is: "<<maxsize<<endl;
int mxel=*max_element(dq.begin(), dq.end());
cout<<mxel;

// sorting the element:
sort(dq.begin(), dq.end());
for(int i:dq)cout<<i<<" ";
return 0;
}