#include <iostream>
using namespace std;
template <class T>
T minimm(T a, T b){
  return a<b?a:b;
}
int main(){
    cout<<minimm(5, 72)<<endl;
    cout<<minimm(79.2f, 982.74f)<<endl;
    //  but i must pass same params i can do float and double like: it's wrong
    // cout<<minimm(9842.82f, 87429);
    double c=minimm(2728758235913577, 2592579977979279457);
    cout<<c<<" ";
return 0;
}