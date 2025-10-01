#include <iostream>
#include <vector>
using namespace std;

int binarytoDecimal(int binary){
  int sum=0, mul=1;
  while(binary>0){
        sum+=(binary%10)*mul;
        mul*=2;
    binary/=10;
  }
    return sum;
  }
int main(){
  cout<<"111 value to decimal is: "<<binarytoDecimal(111)<<endl;
  cout<<"10110111 value to decimal is: "<<binarytoDecimal(10110111)<<endl;
  cout<<"11101 value to decimal is: "<<binarytoDecimal(11101)<<endl;
  cout<<"110100 value to decimal is: "<<binarytoDecimal(110100)<<endl;
  cout<<"10100 value to binary is: "<<binarytoDecimal(10100)<<endl;
return 0;
}