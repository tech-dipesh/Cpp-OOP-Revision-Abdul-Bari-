#include <iostream>
#include <cstring>
// #include <string.h>
using namespace std;
int main(){
  // char a[]="Wow Testing feature";
  char a[]="test";
  // total size of the string a;
  cout<<strlen(a);
   
  // // now pointer with length of the string:
  // char *A="Hello world friedns";
  // cout<<"Lengh tof thh string is"<<strlen(A)<<endl;

  // concat the two function:
  char first[100]="This is the first chars";
  char second[]="This is the second chars value";
  strcat(second, first);
  cout<<second<<endl;

  // second function with the defining the toal length you want to concat:
  char third[]="Wow this this is the testing feature";
  char fourth[]="Can we expect bigger from this";
  strncat(third, fourth, 5);
  cout<<third<<endl;

  // string copy with the destination source and total length is optional:
  char fifth[]="Reliable feature";
  char sixth[]="";
  strcpy(sixth, fifth);
  cout<<sixth<<endl;
  // just pringtin the entir value of releiabel feature:
  cout<<"Now sevent strncpy feature:"<<endl;
  
  char seventh[]="Elon Musk";
  char eigth[]="Bill";
  strncpy(eigth, seventh, 3);
  cout<<eigth;
return 0;
}