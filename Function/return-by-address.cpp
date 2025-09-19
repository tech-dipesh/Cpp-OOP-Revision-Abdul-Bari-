#include <iostream>
using namespace std;
int *fun(int size){
  int *p=new int[size];
  for(int i=0;i<size;i++)
      p[i]=i+10;
}
int main(){
    int size=10;
    int *ptr=fun(size);
    cout<<ptr;
return 0;
}