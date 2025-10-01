#include <iostream>
#include <vector>
using namespace std;

int decimalToOcta(int num){
  int sum=0, mul=1;
  while(num>0){
  sum+=(num%8*mul);
    mul*=10;
      num/=8;
    }
    return sum;
  }
int main(){
  cout<<"7 Decimal to Octa is: "<<decimalToOcta(7)<<endl;
  cout<<"29 Decimal to Octa is: "<<decimalToOcta(29)<<endl;
  cout<<"52 Decimal to Octa is: "<<decimalToOcta(52)<<endl;
  cout<<"1838 Decimal to Octa is: "<<decimalToOcta(183)<<endl;
  cout<<"20 Decimal to Octa is: "<<decimalToOcta(20)<<endl;
return 0;
}