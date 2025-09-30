#include <iostream>
#include <list>
using namespace std;
    
int main(){
    list<int>li;
    li.push_front(30);
    li.push_back(39);
    li.push_back(72);
    li.push_back(63);
    li.push_back(27);
    li.push_back(31);
    li.push_front(37);
    li.push_front(42);
    
    
    // now we can extract element insert remove size empty, front back:
    li.pop_back();
    // int last=li.insert(30);
    li.pop_front();
    cout<<"Find the size: "<<li.size()<<endl;
    cout<<"Checking whether empty or not:"<<li.empty()<<endl;
    // int res=li.front(23);
    li.remove(39);
    
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++){
        // cout<<li.;
    }
    
    
    
    
    // important:
    list<int>ps={52, 23, 53, 87, 40};

    // with 5 list with 3 value
    list<int>ss(5, 3);
    for(int i:ps) cout<<i<<" ";
    cout<<endl;
    for(int i:ss)cout<<i<<" ";
    

    cout<<"first el: "<<ps.front()<<endl;
    cout<<"last el: "<<ps.back()<<endl;
    // can sort the element:
    ps.sort();

    return 0;
}