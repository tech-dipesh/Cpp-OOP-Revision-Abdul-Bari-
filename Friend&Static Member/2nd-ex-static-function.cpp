#include <iostream>
using namespace std;
 class Laptop{
  public:
  Laptop(int val){
    price=val;
  }
  static int price;
  static int getPrice(){
    return price;
  }
 };
 int Laptop::price=29;
int main(){
  // can even access the price without buying object mean getting the price after ubying:
  cout<<Laptop::getPrice();
  Laptop l(20);
  Laptop l1(20);
  Laptop l2(20);
  Laptop l3(20);
  cout<<l.getPrice()<<endl;
  cout<<l1.getPrice()<<endl;
  cout<<l2.getPrice()<<endl;
  cout<<l3.getPrice()<<endl;
return 0;
}