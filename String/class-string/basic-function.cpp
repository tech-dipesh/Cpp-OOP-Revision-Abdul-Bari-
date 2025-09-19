#include <iostream>
#include <string>
using namespace std;
int main(){
   string value="hello how are you friends is that the correct statemetn that i've head about leat me know is that true i willl be calling the national priority of the value right beside of our prioir country so it can be the near value of the right side ok.";
   string name;
   string home="nepal my world";
cout<<value.length()<<endl;
cout<<value.size()<<endl;
// capacity mean how the total size of the array is created as alwasy created bigger size array which return.
cout<<name.capacity()<<endl;
// we can modify as our wish
home.resize(35);
cout<<home.size();


// maximum possible the string size:
cout<<value.max_size()<<endl;
cout<<home.max_size()<<endl;


// clear the entire string:
string val="dear walk studio";
val.clear();
cout<<val.size()<<endl;
// return 1 if that element is empty:
cout<<val.empty()<<endl;
if(val.empty())
  cout<<"Value string is empty";
  else 
    cout<<"no value have some value:"<<val;
cout<<value.empty();
return 0;
}