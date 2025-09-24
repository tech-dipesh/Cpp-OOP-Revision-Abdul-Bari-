#include <iostream>
using namespace std;
// have to declare a second class for accessing it:
class My;
   class Friend{
    private:
    int value=476;
    protected:
    int key=2398;
      public:
      friend My;
    }; 

  class My{
    public:
      Friend f;
      void Print(){
          cout<<"can acces the private value:"<<f.value<<"and also protected value: "<<f.key;
          cout<<"and their sum is: "<<f.key+f.value;
      }
  };
int main(){
  My m;
  m.Print();
return 0;
}