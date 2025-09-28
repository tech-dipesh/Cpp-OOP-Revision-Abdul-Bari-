#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
    
int main(){
     vector<int>vt={29, 2, 5, 9, 10, 14, 18, 21, 25, 29, 30, 30, 35, 65,};
    set<int>vt1={2, 7, 8, 10, 12, 13, 17, 21,  25, 31, 32, 33, 37};
    
    // find the minimum element:
    int minel=*min_element(vt.begin(), vt.end());
    int maxel=*max_element(vt.begin(), vt.end());
    int minset=*min_element(vt1.begin(), vt1.end());
    // why do i have to use the * which is the iterator or pointer on address i'm nto able to understand on here.
    int maxset=*max_element(vt1.begin(), vt1.end());
    cout<<minel<<endl;
    cout<<maxel<<endl;
    cout<<"Min max set value:";
    cout<<minset<<" "<<maxset;


    // find both element at once:
    cout<<endl;
    auto bothvect=minmax_element(vt.begin(), vt.end());
    cout<<"Vector min max values is: "<<*bothvect.first<<" "<<*bothvect.second<<endl;
    auto bothset=minmax_element(vt1.begin(), vt1.end());
    cout<<*bothset.first<<" "<<*bothset.second;
return 0;
}