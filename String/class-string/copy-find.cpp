#include <iostream>

using namespace std;
int main(){
  // copy a string into a character array:
  string welcome="here you will find everythin";
  char val[100];
  welcome.copy(val, welcome.size());
  // if we want just first 5 letter:
  char cpy[10];
  // add the null char to at last to avoid storing the garbage value:
  welcome.copy(cpy, 5);
  cpy[5]='\0';
  cout<<val<<endl;
  cout<<cpy;

  // finding the element from the entire string:
   string s="Welcome to the world welcome";
  cout<<s.find("tuo")<<endl; 

  // find the letter from the right hand side:
  cout<<s.rfind("wel")<<endl;
  
  // starting index 2
  cout<<s.find_first_of('we', 2)<<endl;

  // weccan even mention multipel occurange:
  cout<<s.find_first_of("w");
  cout<<s.find_last_of('me');



return 0;
}