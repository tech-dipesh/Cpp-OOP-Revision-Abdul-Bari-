#include <iostream>
#include <fstream>
using namespace std;
    
int main(){
  int val=239382;
  ofstream binaryout("binary.txt", ios::binary);
  binaryout<<val;
  binaryout.close();
return 0;
}