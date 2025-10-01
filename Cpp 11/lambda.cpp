#include <iostream>
using namespace std;
    // used instead of the function shorter approach also on the jaavascript.
int main(){
  // [capture-list outside](param-list inside){body}(param value or default no value);
  [](){cout<<"First lambda word"<<endl;}();
  
  // with inside params:
  [](int a, int b){cout<<a*b<<endl;}(15, 25);
  
  
  // with the outer call:
  auto val=[](){
    int val=2382;
    int c=2394;
    cout<<val+c<<endl;
  };
  val();


  // don't neeed but sometiems where ther eturn type is differt:
  auto c=[](int l, int b)->int{return 2*(l+b);}(28, 52);
  cout<<c;



  // for accessing the outside function value:
  string sch="school is the first teacher.";
  string uni="sometimes it can also teach the wordst thing.";
  
  [&sch, &uni](){cout<<endl<<sch<<" "<<endl<<uni<<endl;}();

  

  // for taking all the variable inside the lambda.

  int village=17829;
  int city=78256;
  [&](){cout<<city-village<<endl;}();
return 0;
}