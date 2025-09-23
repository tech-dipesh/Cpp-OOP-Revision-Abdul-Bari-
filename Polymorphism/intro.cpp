#include <iostream>
using namespace std;
   class Car{
    public:
    void Start(){
      cout<<"Base Car is started:"<<endl;
    }
   virtual void Stop(){
      cout<<"Base Car is stop:"<<endl;
    }

    virtual void Abstractclass()=0;
  };

  class Thar: public Car{
    public:
    void Start(){
      cout<<"Thar Car is started:"<<endl;
    }
    void Stop(){
      cout<<"Thar Car is stop:"<<endl;
    }
    virtual void Abstractclass(){
      cout<<"This is the abstract classes:"<<endl;
    }
  };
  class Atto: public Car{
    public:
    void Start(){
      cout<<"Thar Car is started:"<<endl;
    }
    void Stop(){
      cout<<"Thar Car is stop:"<<endl;
    }
    virtual void Abstractclass(){
      cout<<"This is the abstract classes:"<<endl;
    }
  };

  // class Atto: public Car{
  //   public: 
  //   void Start(){
  //     cout<<"Byd Atto Car is started:"<<endl;
  //   }
  //   void Stop(){
  //     cout<<"Byd Atto Car is stop:"<<endl;
  //   }
  //  };

int main(){
  // this is the runtime polymorphism.
  Car *c=new Thar();
  c->Start();
  c->Stop();
  c->Abstractclass();
  c=new Atto();
  // c->Start();
  // c->Stop();
return 0;
}