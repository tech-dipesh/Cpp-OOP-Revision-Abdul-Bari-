#include <iostream>
#include <fstream>
using namespace std;
   class Serial{
    public:
    string name;
    int rollid;
    string address;
    string branch;
      // friend ofstream &operator<<(ostream &ofs, Serial &s){
            
      // }
   }; 
int main(){
   // for the each time we can't store the entire value of the object where we canuse the operator overfloadin with friend function and reference.
   Serial sl;
   sl.name="Dipesh", sl.address="Lumbini", sl.rollid=6064, sl.branch="Computer Science";
   ofstream serialfile("serial-class.txt", ios::trunc);
   serialfile<<sl.name<<endl;
   serialfile<<sl.rollid<<endl;
   serialfile<<sl.address<<endl;
   serialfile<<sl.branch<<endl;

  //  for the file read:
  ifstream inputfilevalue("serial-class");
  if(!inputfilevalue || !inputfilevalue.is_open()) cout<<"File doesn't exist on real.";
  string out;
  int integar;
  inputfilevalue>>out;
  inputfilevalue>>integar;
  cout<<out<<integar;
  if(!inputfilevalue.eof()) cout<<endl<<"there is stil some content on the file.";
  inputfilevalue.close();
return 0;
}