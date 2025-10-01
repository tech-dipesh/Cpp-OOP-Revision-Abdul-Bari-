#include <iostream>
#include <vector>
using namespace std;

int hexatoDecimal(int binary){
  int sum=0, mul=1;
  while(binary>0){
        sum+=(binary%16)*mul;
        mul*=16;
    binary/=16;
  }
    return sum;
  }
int main(){
  // cout<<"7 hexa to decimal is: "<<hexatoDecimal(7)<<endl;
  cout<<"35 hexa to decimal is: "<<hexatoDecimal(35)<<endl;
  cout<<"64 hexa to decimal is: "<<hexatoDecimal(64)<<endl;
  cout<<"267 hexa to decimal is: "<<hexatoDecimal(267)<<endl;
  cout<<"24 hexa to binary is: "<<hexatoDecimal(24)<<endl;
return 0;
}