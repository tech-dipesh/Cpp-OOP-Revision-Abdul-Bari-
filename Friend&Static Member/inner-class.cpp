#include <iostream>
using namespace std;
    class Outer{
      public:
      static int num;
      int val;
      void OuterDisplay(){
        i.Print();
        cout<<"Outer: "<<i.a;
      };
    class Inner{
          public:
            int a=83;
            void Print(){
             cout<<"Inner: "<<num<<endl;
            // but i can't access the non static membeer:
           // cout<<val;
           }
          };
          Inner i;
};
int Outer::num=19;
int main(){
  Outer o;
  o.OuterDisplay();
return 0;
}