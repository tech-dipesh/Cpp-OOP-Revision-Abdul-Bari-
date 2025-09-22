#include <iostream>
// #include <string
using namespace std;

class School{
  public:
  string studentname;
  int rolllid;
  int age;
  string location="Butwal";
  string Classes(){
    string res="His name is: "+studentname+"and roll id: "+to_string(rolllid)+" and his age is: "+to_string(age)+" and he is from: "+location;
    return res;
  }
};
int main(){
  School *sc1=new School();
  sc1->studentname="Dipesh";
  sc1->rolllid=274195;
  sc1->age=19;
  cout<<sc1->Classes();
}