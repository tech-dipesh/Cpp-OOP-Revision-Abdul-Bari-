#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream fileread;
  fileread.open("inputfile.txt");
  if (!fileread)
    cout << "There is no file exist of the inputfile.txt" << endl;
  if (!fileread.is_open())
    cout << "file no exist." << endl;
  if (fileread)
    cout << "File is exist." << endl;

  string str;
  string st;
  int integar;
  fileread >> str;
  fileread >> st;
  fileread >> integar;
  cout << str;
  cout << st;
  cout << integar;
  // it mean's we've read end of the files.
  if (fileread.eof())
    cout << "file value is finished.";
  fileread.close();

  return 0;
}