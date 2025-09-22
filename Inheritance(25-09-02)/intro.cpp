#include <iostream>
using namespace std;
   class First{
    int value=927;
    int key=83;
    public:
    int getValue(){
      return value;
    }
    int getKey(){
      return key;
    }
    int volume(){
      return value*key;
    }

};
class Second: public First{
  public:
  int random;
  Second(int r=0){
      // getValue(v);
      // getKey(key);
      random=r;
  }
  void Display(){
    cout<<volume()<<" "<<endl;
  }
  int setRandom(int volume){
    this->random=volume;
  }
  int Sum(){
    return getValue()*getKey()*random;
  }

}; 
int main(){
  Second s(25);
  cout<<s.Sum()<<endl;
  s.Display();
  cout<<endl<<s.volume();
return 0;
}