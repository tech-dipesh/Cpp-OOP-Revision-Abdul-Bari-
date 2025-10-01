// help to initialize the constructor value inside a class.
#include <iostream>
using namespace std;
    class City{
      int street;
      int homenumber;
      public:
      City(auto street, auto homenumber){
        this->street=street;
        this->homenumber=homenumber;
      }

      City():City(38, 52){}


      int exactAddress(){
        return street+825;
      }

   }; 
int main(){
  City c;
  cout<<c.exactAddress();
return 0;
}