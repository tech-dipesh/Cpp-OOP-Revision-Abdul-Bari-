#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
   int Sum(int n, ...){
         va_list sumval;
         va_start(sumval, n);
         int sum=0;
         for(int i=0;i<n;i++){
            // i must declare the data type.
            int s=va_arg(sumval, int);
            sum+=s;
         }
         return sum;
      }
      int Fact(int n, ...){
      va_list factval;
      va_start(factval, n);
      int sum=1;
      for(int i=0;i<n;i++){
         // i must declare the data type.
         sum*=va_arg(factval, int);
      }
      return sum;

   } 
int main(){
  int first=81;
  int second=2834;
  int third=98234;
  int fourth=82439;
  int fifth=1893;
  int sixth=634;
  int n=6;
int res= Sum(n, first, second, third, fourth, fifth, sixth);
cout<<res<<endl;
int next=Fact(n, first, second, third, fourth, fifth, sixth);
cout<<next;
return 0;
}