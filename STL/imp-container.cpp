#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <algorithm>
#include <iterator>
using namespace std;
void VectorOperation(){
  vector<int>vt={23, 52, 13, 45, 41, 29, 17, 47, 98, 85, 63};
  vt.push_back(75);
  vt.push_back(39);
  vt.push_back(65);
  vt.pop_back();
  vt.pop_back();
  // accessing certain element: :
  int cer=vt.at(3);
  int byarr=vt[2];

  int temp=35;
  // inserting at the first element:
  vt.insert(vt.begin(), temp);
  // fourth index of the 99 value:
  vt.insert(vt.begin()+4, 99);

  // remove single element by index and by from the position to till position:
  int positinon=3;
  vt.erase(vt.begin());

  // at index 2
  vt.erase(vt.begin()+2);

  for(int i:vt)cout<<i<<" ";
}

void setOperation(){
  set<int>st={83, 25, 42, 36, 19, 21};
  st.insert(35);
  st.insert(27);
  st.insert(48);


  // removing from any index or value:
  st.erase(3);

  auto it=st.find(25);
  st.erase(it);

  
  int totalsze=st.size();
  cout<<totalsze<<endl;

  // remove from the position:
  st.erase(25);

  for(int i:st)cout<<i<<" ";
}

void UnorderedMapOperation(){
  unordered_map<int, string>um;
  um.insert({
    {27, "Tomato"},
    {42, "Potato"},
    {51, "CowlyFlower"},
  });
  um.insert({55, "Abishkar"});
  um.insert({31, "Saag"});
  
  
  // remove and find:
  um.erase(51);
  
  if(um.find(27)!=um.end()) cout<<endl<<"That element is exist ok."<<endl;
  
  // remove the first element:
  um.erase(um.begin());
}

void UnorderedSetOperation(){
  unordered_set<string>us;
  us.insert("Bara");
  us.insert("Parsa");
  us.insert("Mahottari");
  us.insert("283");
  us.insert("642");
  us.insert("469");

  us.erase("469");

  for(string i:us)cout<<i<<" ";

  if(us.find("283")!=us.end())cout<<endl<<"yes that key was found"<<endl;
}

void PriorityQueueOperation(){
  priority_queue<int>pq;
  pq.push(84);
  pq.push(34);
  pq.push(24);
  pq.push(58);
  pq.push(34);

  pq.pop();
  // for(int i:pq)cout<<i<<" ";
  while(!pq.empty()){
    int tp=pq.top();
    cout<<tp<<" ";
    pq.pop();
  }
  
}



int main(){
  VectorOperation();
  setOperation();
  UnorderedMapOperation();
  UnorderedSetOperation();
  PriorityQueueOperation();
return 0;
}