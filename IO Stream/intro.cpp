#include <fstream>
#include <iostream>
using namespace std;
int main(){
  // ifstream for input ostream for utput ifstream and ofstream of input file and output file.
  ofstream outfile("my.txt");
  outfile<<"Fist word on file management.";
  outfile.close();
  return 0;
}