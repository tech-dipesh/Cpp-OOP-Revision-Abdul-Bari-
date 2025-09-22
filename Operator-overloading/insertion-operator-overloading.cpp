#include <iostream>
using namespace std;
class Complex{
  int real;
  int imaginary;
  public:
  // accessor and mutator for private value access:
  void setReal(int real){
    if(real<0) this->real=1;
    else this->real=real;
  }
  void setImaginary(int imaginary){
    if(imaginary<0) this->imaginary=1;
    else this->imaginary=imaginary;
  }

  int GetReal(){
    return real;
  }
  int getImaginary(){
    return imaginary;
  }

  Complex(int real=0, int imaginary=0){
    this->real=real;
    this->imaginary=imaginary;
  }
 
  // cpp is the keyword to help it.
  friend ostream & operator<<(ostream &o, Complex &c1);
};

ostream &operator<<(ostream &o, Complex &c1){
  o<<c1.GetReal()<<"+i"<<c1.getImaginary();
}

int main(){

  Complex c1(14, 9);
  cout<<c1;
  // both are similar we can write any of one:
  operator<<(cout, c1);
  
return 0;
}