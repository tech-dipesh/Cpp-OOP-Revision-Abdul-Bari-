#include <iostream>
using namespace std;
int main(){
  //  int arr[5]={1, 2, 3, 5, 8};
  //  int *p=new int[5]; 
  //  p[0]={11};
  //  p[1]={13};
  //  p[2]={24};
  // //  store the 3 and 4 value to the garbage value:
  //  for(int i=0;i<5;i++)
  //   cout<<p[i]<<" ";

    // allocate dynaic of teh any new value size:
    // static size:
    
    int size;
    cout<<"Please enter the array size";
    cin>>size;
    int *A=new int[size];
    cout<<sizeof(A);
    delete [] A;
return 0;
}