#include <iostream>
using namespace std;
int Linear(int a[], int i, int size, int key){
//   int i=0;
if(i==size)return false;
  if(a[i]==key) 
      return true;
return  Linear(a, i+1, size, key);
}
int main(){
    int arr[]={24, 98, 25, 92, 53, 63, 29, 75, 76, 67, 85, 36, 17, 19, 20, 35, 40, 45, 45, 7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int key=76;
    // cout<<Linear(arr, i, size, key);
    if(Linear(arr, i, size, key)){
        cout<<"Value is exist on the array";
    }
    else{
        cout<<"Value doesn't exist.";
    }
return 0;
}