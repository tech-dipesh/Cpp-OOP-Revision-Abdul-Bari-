#include <iostream>
using namespace std;
  double Sum(auto val, auto check){
    float f= 23892422.823f;
    return val+check+f;
  }
int main(){
  int val=2832;
  double check=22382.238;
  float fl=2398234.1832f;
  auto res=val+check+fl;
  cout<<res<<endl;


  auto s=283+23839.238f+'a';
  cout<<s;

  auto Fun=Sum(fl, res);
  cout<<endl<<Fun<<endl;



  // declaration types:
  int a=2384;
  double b=238;f
  decltype(b) c=a;
  cout<<a<<endl;

  int ar[]={2, 9, 10, 25, 39};
  for(auto i:ar) cout<<i<<" ";
return 0;
}