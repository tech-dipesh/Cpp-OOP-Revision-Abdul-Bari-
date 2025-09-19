#include <iostream>
#include <cstring>
using namespace std;
int main(){
  // it will give the output of the remaining string of where it have like if we give a1=mm output would ing Test.
   char a[]="Programming Test";
   char a1[]="mm";
  //  cout<<strstr(a, a1);
   if(strstr(a, a1))
   cout<<strstr(a, a1)<<endl;
else cout<<"Not found"<<endl;

// finding the occurance of the given character this is only for the char before it was for the string:
char b[]="Occurance finding teh chars";
char c[]="With checking whether exist or not:";
// strchr find from the left hand side while strrchr find from the right hand side:
cout<<strchr(b, 'a')<<endl;
// it will give the error when we have pu the char that is not exist on the string.
cout<<strrchr(b, 'c')<<endl;

  
// compare the two string with return +ve if the first value is bigger in terms of the ascii code and -ve with teh difference of smaller value in terms of teh ascii code:
char n[]="Dipesh";
char p[20]="minor";
char p1[20]="elder";
cout<<strcmp(p, p1)<<endl;
char n1[]="dipesh";
cout<<strcmp(n, n1);
return 0;
}