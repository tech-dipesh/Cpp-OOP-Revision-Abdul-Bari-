#include <iostream>
using namespace std;
    class Test{
      int a,b;
      public:
      static int count;
      int Output(){
        a=28;
        b=29;
        count++;
        return count;
      }
    };
    int Test::count=0;
int main(){
  Test first, second;
  cout<<first.Output();
  cout<<second.Output();
    cout<<Test::count;

return 0;
}