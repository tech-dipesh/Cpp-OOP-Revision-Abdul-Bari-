#include <iostream>
// for file stream managment i must have to import the file:
#include <fstream>
using namespace std;
    
int main(){
  fstream namefile("appendfile.txt", ios::app);
  namefile<<"This is the string value of the append text.";
  namefile<<endl;
  namefile<<9999;
  //  i must close the file to avoid the memory leak
  namefile.close();
return 0;
}