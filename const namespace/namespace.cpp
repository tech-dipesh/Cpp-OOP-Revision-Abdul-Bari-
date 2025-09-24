#include <iostream>
using namespace std;
  
namespace  First{
  void Print(){
    cout<<"First Namespaces value"<<endl;
  }
};  
namespace Second{
  void Print(){
    cout<<"Second Namespaces value"<<endl;
  }
};    
using namespace Second;
int main(){
  Print();
  First::Print();
  Second::Print();
return 0;
}