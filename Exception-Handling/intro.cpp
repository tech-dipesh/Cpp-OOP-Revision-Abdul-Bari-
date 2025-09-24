#include <iostream>
using namespace std;
int main(){
   int a=30, b=-9823;
  try{
    if(b<1) throw 1;
    cout<<a/b;
  }
  catch(int err){
      cout<<"You passed the wrong variable types: "<<err;
  }
return 0;
}