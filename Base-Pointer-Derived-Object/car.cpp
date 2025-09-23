#include <iostream>
using namespace std;
class BasicCar{
    public:
    void Steering(){
      cout<<"Steering is working"<<endl;
    }
    void Gear(){
      cout<<"Gear is find: "<<7<<endl;
    }
   };
class AdvanceCar: public BasicCar{
  public:
  void SunRoof(){
      cout<<"Sunroof is working: "<<endl;
    }
  void Ac(){
      cout<<"Ac is working: "<<endl;
  }
  void PlayMusic(){
    cout<<"Music is working: "<<endl;
  }
   }; 
int main(){
  AdvanceCar a;
  BasicCar *baseptr=&a;
  baseptr->Gear();
  baseptr->Steering();

  // can't access the baseptr->Ac(); ❌
return 0;
}