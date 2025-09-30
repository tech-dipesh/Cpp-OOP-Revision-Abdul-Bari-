
#include <iostream>
#include <forward_list>
using namespace std;

void forwardListOperation(forward_list<int>&fl){
    fl.push_front(30);
    fl.push_front(37);
    fl.push_front(42);
    

    // now we can extract element insert remove size empty, front back:
    // int last=li.insert(30);
    fl.pop_front();
    // Find the size:
    auto size=distance(fl.begin(), fl.end());
    cout<<"Size is: "<<size<<endl;
    cout<<"Checking whether empty or not:"<<fl.empty()<<endl;
    // int res=li.front(23);
    fl.remove(39);

    forward_list<int>::iterator it;
    for(it=fl.begin();it!=fl.end();it++){
        cout<<*it;
    }
}
int main(){
    // this is same as list but only forward direction of the single linked list:
    forward_list<int>fl;
    forwardListOperation(fl);
return 0;
}