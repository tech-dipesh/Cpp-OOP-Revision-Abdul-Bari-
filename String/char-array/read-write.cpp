#include <iostream>
using namespace std;
int main(){
  // first approach where it will only print the til first space not entire value:
  char b[50];
  // cout<<"Enter anything with the space: ";
  // cin>>b;
  // cout<<b<<endl;
  // // above b only print the till  for avoiding that we have to use the .get.
  // // second approach with the cin.get(s) or cin.getline it will on also include the space between the words;
  // char a[100];
  // cout<<"Please enter the name"<<endl;
  // // cin.get(a, 100);
  // cin.getline(a, 100);
  // cout<<"Welcome to the world where your name is: "<<a;



  // there is the still problem on teh .get for that we've to use the .getline to print the multiple line of values:
  char a[100];
  char a1[100];
  cout<<"Please enter the vaeluw tih the space:";
  cin.get(a, 100);
  cout<<"Welcome to the world my friend:"<<a<<endl;
  // now .ignore will girnoe and null chars or keyword buffer
  cin.ignore();
  cout<<"Now please enter the second value:"<<endl;
  cin.get(a1, 100);
  cout<<"Yes my dear friend:"<<a1;
return 0;
}