#include <iostream>
using namespace std;
int scope=50;
int main(){
    scope=75;
    {
      scope=80;
      // it will print near scoep which is 80:
      cout<<scope<<endl;
    }
    // i should get ther esult which is 75.
    cout<<scope<<endl;
    cout<<::scope<<endl;
}