#include <iostream>
using namespace std;
class Access{
  private:
  int data=823932;
  protected:
  int key=9823;
  public:
  int value=8239;
};

class ChildAccess: public Access{
  public:
  // can access the protected by  a child class:
  void Display(){
    cout<<"Protected value:"<<key<<endl;
  }
};

class GrandChildAccess: protected ChildAccess{
  
  int setChildDisplay(){
    return value;
  }
  void ChildDipslay(){
    cout<<"Can even acces the grandchilden from now on next child can't acces as i've set the protected: "<<setChildDisplay()<<endl;
  }
  public:
  void getChilddipslay(){
    ChildDipslay();
  }

  
};
    
int main(){
  // oly can access the public on here:
  Access a;
  // a.data=9238;
  // a.key=98238;
  // a.value=282;


  ChildAccess c;
  c.Display();

  // can't access child display as it's a protected.
  GrandChildAccess g;
  g.getChilddipslay();
return 0;
}