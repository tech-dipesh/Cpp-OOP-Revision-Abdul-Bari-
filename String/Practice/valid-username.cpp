#include <iostream>
using namespace std;
   // either character, number and - and .
string valid(string val){
    // number are 49 to 57 45 and 46
    string res;
    for(int i=0;val.size();i++){
        if(!( (val[i]>=65 && val[i]<=91)|| (val[i]>97 && val[i]<=122) || (val[i]<=49 &&val[i]>=57) || val[i]==45 || val[i]==46 ))
             res="Invalid Result";
             return res;
            //  break;
    }
    res="Valid Username";
    return res;
}
int main(){
    string f="diip72-20.@gmail.com";
    string s="rahu272-.@gmail.com";
    string t="rapid7242&@gmail.com";
    string fo="hu7(&22ha@gmailr.com";
    string e="ha**&(*d927247742@outlook.com";
    
    cout<<valid(f)<<endl;
    cout<<valid(s)<<endl;
    cout<<valid(t)<<endl;
    cout<<valid(fo)<<endl;
    cout<<valid(e)<<endl;

return 0;
} 