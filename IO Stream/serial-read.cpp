#include <iostream>
#include <fstream>
using namespace std;
   class Serial{
    public:
    string name;
    int rollid;
    string address;
    string branch;
      friend ofstream &operator<<(ofstream &serialfile, Serial &s);
      friend ifstream &operator>>(ifstream &fileread, Serial &s);
      
   }; 
  ofstream &operator<<(ofstream &serialfile, Serial &s){
   serialfile<<s.name<<endl;
   serialfile<<s.rollid<<endl;
   serialfile<<s.address<<endl;
   serialfile<<s.branch<<endl;
   return serialfile;
 }
  ifstream &operator>>(ifstream &fileread, Serial &s){
    fileread>>s.name>>s.rollid>>s.address>>s.branch;
    return fileread;
 }


int main(){
   // for the each time we can't store the entire value of the object where we canuse the operator overfloadin with friend function and reference.
   Serial sl;
   sl.name="Dipesh", sl.address="Lumbini", sl.rollid=6064, sl.branch="Computer Science";
  ifstream fileread("serial-read.txt");

   //  i can't directly insert the values.
   fileread>>sl;
return 0;
}