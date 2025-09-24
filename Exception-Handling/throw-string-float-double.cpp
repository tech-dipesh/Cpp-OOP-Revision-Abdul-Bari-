#include <iostream>
using namespace std;
template<class T>
T Math(T a, T b){
  if(a<1 || b<1) throw "String error occured";
  return a+b*(2398)/9823;
} 
// have to declare on each function of the template:
int main(){
  int y=9283, z=9823;
  try{
      cout<<Math(y, z);
  }
  catch(int err){
    cout<<"It's a int function: "<<err;
  }
  catch(string err){
    cout<<"It's a string function: "<<err;
  }
return 0;
}