#include <iostream>
using namespace std;
   class Great{
      public:
      void first final(){
        return 232+293;
      }
      double second(){
        return 23982.238f+131398.9823f;
      }
    };
    class Grand: public Great{
      // now i can't override the first as it take the final:
      public:
      // void first(){
      //   return 1+3;
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