#include <iostream>
using namespace std;
class BaseCar{
  public:
  void Start(){
    cout<<"BaseCar is started"<<endl;
  }
  virtual void Gear(){
    cout<<"Gear Basic Started, with a virtual keyword started: "<<endl;
  }
};
class AdvanceCar: public BaseCar{
  public:
  void Start(){
    cout<<"Advance Car is started: "<<endl;
  }
  virtual void Gear(){
    cout<<"Gear Advance Car is Started: with a virtual keyword: "<<endl;
  }
  };
int main(){
    BaseCar *basecarptr=new AdvanceCar();
    basecarptr->Start();
    basecarptr->Gear();
return 0;
}