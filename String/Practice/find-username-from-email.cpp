#include <iostream>
#include <string>
using namespace std;
string find(string each){
    // first we have to find where @ located:
    size_t at=each.find('@');
    string username=each.substr(0, at);
    size_t dot=each.find('.', at);
    string domain=each.substr(at+1, dot);
    string res="Your username is: "+username+" Your domain is:"+domain;
    return res;
}

// valid or not string:
// either character, number and - and .
string valid(string val){
  
}
int main(){
    string f="diip@gmail.com";
    string s="rahul@gmail.com";
    string t="rapid@gmail.com";
    string fo="hu72ha@gmail.com";
    string e="hausdf827742@outlook.com";
    
    cout<<find(f)<<endl;
    cout<<find(s)<<endl;
    cout<<find(t)<<endl;
    cout<<find(fo)<<endl;
    cout<<find(e)<<endl;
return 0;
}