// #include <iostream>
// using namespace std;

// class Parent{
//   int a;
//   protected:
//   int b;
//   public:
//   int c;
//   void FunctionParetn(){
//     a=24;
//     b=9843;
//     c=982243;
//   }
// };


// class Child: public Parent{
//   public:
//   void FunctionChild(){
//     // a=29843;
//     b=2843;
//     c=2348;
//   }
// };

// class GrandChild: public Child{
//   public:
//   void FunGrand(){
//       // a=28932;
//       // b=29834;
//       c=98343;

//   }
// };
    
// int main(){
//   GrandChild c;
//   c.b=2832398;
//   c.c=239838;

// return 0;
// }



#include <iostream>
using namespace std;

class Parent{
  int a;
  protected:
  int b;
  public:
  int c;
  void FunctionParetn(){
    a=24;
    b=9843;
    c=982243;
  }
};


class Child: protected Parent{
  public:
  void FunctionChild(){
    // a=29843;
    b=2843;
    c=2348;
  }
};

class GrandChild: public Child{
  public:
  void FunGrand(){
      // a=28932;
      // b=29834;
      c=98343;

  }
};
    
int main(){
  // i can't access the protectedd on the object also even even if i do priavet i can't access but protected i can' access on the derived class.
  GrandChild c;
  // c.b=2832398;
  // c.c=239838;

return 0;
}