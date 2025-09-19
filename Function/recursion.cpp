#include <iostream>
using namespace std;
void Recursion(int n){
  if(n>2){
    cout<<n<<" ";
    cout<<endl;
    Recursion(n-1);
    cout<<n<<endl;
  }
}
int main(){
    Recursion(5);
return 0;
}