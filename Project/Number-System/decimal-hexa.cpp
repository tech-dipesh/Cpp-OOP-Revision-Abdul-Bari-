#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void decimalToHexa(int num){
  string sum;
  int mul=1, i=0;
  while(num>0){
    int rem=num%16;
    if(rem>9)
      sum+=rem+'A'-10;
    else sum+=rem+'0';
    // sum+=(num%16)*mul;
    num/=16;
    }
    reverse(sum.begin(), sum.end());
  cout<<sum;
  //     cout<<sum[i];
  } 

int main(){
  cout<<"7 Decimal to Octa is: ";
  decimalToHexa(7);
  cout<<endl<<"29 Decimal to Octa is: ";
  decimalToHexa(29);
  cout<<endl<<"52 Decimal to Octa is: ";
  decimalToHexa(52);
  cout<<endl<<"1838 Decimal to Octa is: ";
  decimalToHexa(1838);
  cout<<endl<<"20 Decimal to Octa is: ";
  decimalToHexa(20);
return 0;
}