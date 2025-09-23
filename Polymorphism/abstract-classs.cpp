#include <iostream>
using namespace std;
    class Country{
      public:
      // it must be derived by the child classs must:
      virtual void Population()=0;

        // cout<<"7 billion population"<<endl;
      virtual void Language()=0;

        //this will be the reusablity and polymorpshim and if i remoe below it will ebcome a pure virtual function which is also the polymorphism. 
        void Area(){
          cout<<"Wolrd";
        }
    };
    class Nepal: public Country{
      public:
      void Population(){
        cout<<"30 million population"<<endl;
      }
      
       void Language(){
        cout<<"Nepali: ";
      }
    };

    class China: public Country{
      public:
      void Population(){
        cout<<"1.4 billion population"<<endl;
      }
      
       void Language(){
        cout<<"Chinese: ";
      }
    };
    
int main(){
  // i can't create of object class country on pure virtual function:
  // the purpose is to child override that main function:
  // pure virtual function are used for generilization and pure polymorphism.
  Country *c=new Nepal();
  c->Population();
  c->Language();
return 0;
}