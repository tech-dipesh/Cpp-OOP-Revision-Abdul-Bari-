#include <iostream>
#include <


using namespace std;

   class Parent{
    public:
       const char* what() const throw() {
        return "Number has to be positive";
    }
   };

   class ChildException : public Parent {
public:
    const char* what() const throw() {
        return "Child: Number has to be positive";
    }
};

class Child: public exception{

  string 
  
  
  string Set(int myage, int sagage, int abage, int dupage,int  oshage){
    if(myage<0 || sagage<0 || abage<0 || dupage<0 || oshage<0) throw ChildException;
        else{
          return "Yes number are all correct.";
        }
      }
  };

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
    cout<<"It's a parent error: "<<err;
  }
  catch(...){
    cout<<"it's a wrong to declare before type catch error."
  }
return 0;
}