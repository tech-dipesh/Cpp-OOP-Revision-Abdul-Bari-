#include <iostream>
using namespace std;
int main(){
    
  int A[5]={23, 29, 30, 40, 52};
  int *p=A;
  // it will access the first element.
  cout<<*p<<endl;
  // accessing the second element with the increament:
  cout<<*++p<<endl;
  // we will get ehthe address of that element if we just print without *p;
  cout<<p<<endl;


  // printitn the entire value:
  for(int i=0;i<5;i++){
    // accessing the next elemtn
    cout<<*(p+i)<<" ";
  }

  // check whihc on is far away main use cawe;
  int *Q=&A[5];
  cout<<Q-p<<endl;
  cout<<p-Q;
return 0;
}