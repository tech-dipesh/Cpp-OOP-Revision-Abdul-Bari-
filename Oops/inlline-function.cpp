#include <iostream>
using namespace std;
class Inline{
  public:
  inline void InFunction();
  void noninline();
};
void Inline::InFunction(){
  cout<<"it's a inline function due to write inline keyword inside it."<<endl;
}
void Inline::noninline(){
  cout<<"it's a noninlinle with not writing anything.";
}
int main(){
    Inline i;
    i.InFunction();
    i.noninline();
return 0;
}