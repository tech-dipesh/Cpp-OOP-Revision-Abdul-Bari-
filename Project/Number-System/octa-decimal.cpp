#include <iostream>
#include <vector>
using namespace std;

int octatoDecimal(int binary){
  int sum=0, mul=1;
  while(binary>0){
        sum+=(binary%10)*mul;
        mul*=8;
    binary/=10;
  }
    return sum;
  }
int main(){
  cout<<"7 Octa to decimal is: "<<octatoDecimal(7)<<endl;
  cout<<"35 Octa to decimal is: "<<octatoDecimal(35)<<endl;
  cout<<"64 Octa to decimal is: "<<octatoDecimal(64)<<endl;
  cout<<"267 Octa to decimal is: "<<octatoDecimal(267)<<endl;
  cout<<"24 Octa to binary is: "<<octatoDecimal(24)<<endl;
return 0;
}