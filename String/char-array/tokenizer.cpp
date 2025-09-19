#include <iostream>
#include <cstring>
using namespace std;
int main(){
   char a[]="x=20;y=30;x=50";
  //  cout<<strtok(ar, "=;");
  //  nwo we want to do the repeated times:
  // char *token=strtok(a, "=;");
  // while(token){
  //   cout<<token<<endl;
  //   token=strtok(nullptr, "");
  // }

  char *token=strtok(a, ";");
  while(token){
    cout<<token<<endl;
    // now it wil just ask forget the last on and start from teh next one like if first is check x now skip that start from the =.
    token=strtok(nullptr, ";");
  }
  char *tt=strtok(a, "=?");
  while(tt){
    cout<<tt<<endl;
    tt=strtok(nullptr, "=?");
  }
return 0;
}