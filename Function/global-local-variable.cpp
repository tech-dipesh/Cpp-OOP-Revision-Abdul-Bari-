#include <iostream>
using namespace std;
// this is global:
int global=0;
void function(){
  // this is the local variable
  int a=5;
  global+=5;
  cout<<"Local: "<<a<<" Global: "<<global<<endl;
}
int main(){
  global=20;
  function();
  global++;
  function();
  global++;
  function();
  global++;
  function();
  global++;
  cout<<"Main Global: "<<global;
return 0;
}