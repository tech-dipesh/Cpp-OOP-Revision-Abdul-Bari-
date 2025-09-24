#include <iostream>
using namespace std;
    class Test{
      int a,b;
      public:
      static int count;
        Test(){
          a=9823;
          b=23;
          count++;
      }
      static int Output(){
        // i cn'at use non static member inside a static function such as a and b:
        // a=28;
        count++;
        return count;
      }
    };
    int Test::count=0;
int main(){
  Test first, second;
  cout<<Test::count;
  cout<<Test::Output();
return 0;
}