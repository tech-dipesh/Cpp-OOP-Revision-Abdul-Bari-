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
      
   }; 
  ofstream &operator<<(ofstream &serialfile, Serial &s){
   serialfile<<s.name<<endl;
   serialfile<<s.rollid<<endl;
   serialfile<<s.address<<endl;
   serialfile<<s.branch<<endl;
   return serialfile;
 }
 


int main(){
   // for the each time we can't store the entire value of the object where we canuse the operator overfloadin with friend function and reference.
   Serial sl;
   sl.name="Dipesh", sl.address="Lumbini", sl.rollid=6064, sl.branch="Computer Science";
   ofstream serialfile("serialwrite.txt", ios::trunc);
   
   //  i can't directly insert the values.
   serialfile<<sl;
   serialfile.close();
return 0;
}