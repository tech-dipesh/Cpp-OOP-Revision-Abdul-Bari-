#include <iostream>
using namespace std;
   class Parent{

   };
   class Child: public exception{

   };
   int Set(int myage, int sagage, int abage, int dupage,int  oshage){
      if()
   }
int main(){
  int myage=20, sagage=15, abage=98, dupage=73, oshage=17;
  try{
  cout<<Set(myage, sagage, abage, dupage, oshage)
  }
  // catch(...){
  //   cout<<"it's a wrong to declare before type catch error."
  // }
  // i must alwasy return child class first.
  catch(Child err){
    cout<<"It's a child class: "<<err;
  }
  catch(Parent err){
    cout<<"It's a error: "<<err;
  }
  catch(...){
    cout<<"it's a wrong to declare before type catch error."
  }
return 0;
}