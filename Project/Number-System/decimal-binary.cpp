#include <iostream>
#include <vector>
using namespace std;

int DecimalToBinary(int num){
  int out=0, mul=1;
  while(num>0){
     out+=(num%2)*mul;
    mul*=10;
      num/=2;
    }
    return out;
  }
int main(){
  cout<<"7 value to binary is: "<<DecimalToBinary(7)<<endl;
  cout<<"1838 value to binary is: "<<DecimalToBinary(183)<<endl;
  cout<<"29 value to binary is: "<<DecimalToBinary(29)<<endl;
  cout<<"52 value to binary is: "<<DecimalToBinary(52)<<endl;
  cout<<"20 value to binary is: "<<DecimalToBinary(20)<<endl;
return 0;
}