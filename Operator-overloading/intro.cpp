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
  // Complex add(Complex val){
  //   Complex temp;
  //   temp.real=real+val.real;
  //   temp.imaginary=imaginary+val.imaginary;
  //   return temp;
  // }
  Complex operator+(Complex val){
    Complex temp;
    temp.real=real+val.real;
    temp.imaginary=imaginary+val.imaginary;
    return temp;
  }
};
int main(){

  Complex c1(14, 9);
  Complex c2(7, 19);
  // setting the each value:
  c1.setReal(4);
  c1.setImaginary(9);
  c2.setReal(7);
  c2.setImaginary(6);
   Complex c3;
  // c3=c1.add(c2);
  c3=c1+c2;

  cout<<c3.GetReal()<<"+i"<<c3.getImaginary();
return 0;
}