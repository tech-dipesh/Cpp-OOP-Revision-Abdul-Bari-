#include <iostream>
using namespace std;
   class Great{
      public:
      virtual void first() final{
        // return 232+293;
        cout<<"This is the first data."<<endl;
      }
      double second(){
        return 23982.238f+131398.9823f;
      }
    };
    class Grand: public Great{
      // now i can't override the first if i take final the base drived:
      public:
      // void first(){
      //   // return 1+3;
      //   cout<<"Derived class first.";
      // }
      
      double second(){
        return 9.283f+9.2348f;
      }
   };
int main(){
  Grand g;
  g.first();
  cout<<g.second();
return 0;
}