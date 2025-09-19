#include <iostream>
using namespace std;
void swap(int *x, int *y){
  cout<<"Their address: "<<&x<<" "<<&y<<endl;
  int temp=*x;
  *x=*y;
  *y=temp;
}
int main(){
  int a=20, b=40;
  swap(&a, &b);
  cout<<a<<" "<<b;
return 0;
}