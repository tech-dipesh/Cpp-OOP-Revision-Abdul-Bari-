#include <iostream>
using namespace std;
   class Friend{
    private:
    int a;
    protected:
    int b;
      public:
      int c;
      friend void getData();
    }; 
void getData(){
  Friend f;
  // i can access upon only ojbect not directly.
 f.a=9823;
 f.b=9280;
 f.c=239;
 cout<<f.a+f.b;

    };
int main(){
 getData();

return 0;
}