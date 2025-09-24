#include <iostream>
// #include <


using namespace std;

   class ParentException{
    public:
       const char* what() const throw() {
        return "Number has to be positive";
    }
   };

   class ChildException : public ParentException{
public:
    const char* what() const throw() {
        return "Child: Number has to be positive";
    }
};

class OriginalCode{
  public:
  string firstThree(int myage, int abage){
    if( myage*20>1000 && (abage*3)/5){
        throw ParentException();
    }
    else{
      return "Number are all corect order value.";
    }
  }
  
  
  string Set(int myage, int sagage, int abage, int dupage,int  oshage){
    if(myage<0 || sagage<0 || abage<0 || dupage<0 || oshage<0) 
    throw ChildException();
        else{
          return "Yes number are all correct.";
        }
      }
  };

int main(){
  OriginalCode o;
  int myage=20, sagage=15, abage=98, dupage=73, oshage=17;
  try{
  cout<<o.Set(myage, sagage, abage, dupage, oshage)<<endl;
  cout<<o.firstThree(myage, abage);
  }
  // catch(...){
  //   cout<<"it's a wrong to declare before type catch error."
  // }
  // i must alwasy return child class first.
  catch(ChildException& err){
    cout<<"It's a child class: "<<err.what();
  }
  catch(ParentException& err){
    cout<<"It's a parent error: "<<err.what();
  }
  catch(...){
    cout<<"it's a wrong to declare before type catch error.";
  }
return 0;
}