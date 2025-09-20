#include <iostream>
using namespace std;
int main(){
  // ad the additional text with end of the string:
    string s="pointer";
    s.append("Help");
    
    s.append("12345", 4);
    cout<<s<<endl;

    // insrt the value at the specific position:
    string name="Real world value";
    name.insert(3, "Return");
    cout<<name<<endl;
    // inser the multiple copies at the string:
    name.insert(3, 5, '!');
    cout<<name<<endl;


    // replaceing the any value:
    string obj="Values are sigma";
    obj.replace(2, 6, "si");
    cout<<obj<<endl;

    // erasing the value same like clear:
    string same="Raaman";
    same.erase();
    cout<<same<<endl;

    // push the value at last:
    string library="more than 40 people attended";
    library.push_back('m');
    library.pop_back();
    cout<<library<<endl;

    // swap the two string:
    string s1="first value";
    string s2="second value";
    s1.swap(s2);
    cout<<s1;
    return 0;
}