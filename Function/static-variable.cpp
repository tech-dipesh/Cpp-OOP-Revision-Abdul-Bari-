#include <iostream>
using namespace std;
void fun(){
  static int value=10;
  // this is below local with destror once function end while static will be there as long program is running:
  int a=25;
  value++;
  cout<<"Local Value: "<<a<<" Static: "<<value<<endl;
}
int main(){
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
return 0;
}