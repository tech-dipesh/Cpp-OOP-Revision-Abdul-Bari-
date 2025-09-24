#include <iostream>
using namespace std;
   class AllExceptionHandling: public exception{
    
   };

   int Op(int bag, int rup, int syan, int gul, int par, int practice){
      if(bag%2==1 || rup%2==1 || syan%2==1 || gul%2==1 || par%2==1 || practice%2==1) 
        throw "It's having any value of th odd number which isn't the possible";
      else return bag+rup+syan+gul+par+practice;
   }

int main(){
  int baglung=75;
  int rupandehi=238;
  int syangja=2982;
  int gulmi=234;
  int parbat=547;
  int test=-9398;
  try{
  cout<<Op(baglung, rupandehi, syangja, gulmi, parbat, test);
  }
  catch(int err){
    cout<<"It's a integar error: "<<err;
  }
  catch(string err){
    cout<<"It's a string error: "<<err;
  }
  catch(double err){
    cout<<"It's a double error: "<<err;
  }
  catch(...){
    cout<<"It's a error which can't detect by anyone";
  }
return 0;
}