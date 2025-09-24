#include <iostream>
using namespace std;
     // constant function:
  class School{
    public:
    int a=2938;
    void Display ()const{
      cout<<a;
      // i cna't modify:
      // a++;
      // but i can make the output other but cna't change:
      cout<<a+283;
    }

    // refernce constant function:
    // void Ref(const int &c, int &c){
    void Ref( int &c, int &d){
        int temp=c;
        c=d;
        d=temp;
        cout<<c<<" "<<d;
    }
  }; 
int main(){
  School s;
  s.Display();

  // swapping the two el.
  int c=238, d=983;
  s.Ref(c, d);
return 0;
}