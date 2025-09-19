#include <iostream>
using namespace std;
void swap(int a, int b){
  // before swapping on the function
  cout<<a<<" "<<b<<endl;
  int temp=a;
  a=b;
  b=temp;
  // after swapping only on inside function not on actual value:
  cout<<a<<""<<b<<endl;
}
int main(){
    int x=25, b=52;
    swap(x, b);
    cout<<x<<" "<<b;
return 0;
}