#include <iostream>
using namespace std;
   class Rational{
      int pdata;
      int qdata;
      public:
      // constructor:
      Rational(int pdata=0, int qdata=0){
          this->pdata=pdata;
          this->qdata=qdata;
      }
      void setPdata(int pdata){
        if(pdata<1) this->pdata=1;
        else this->pdata=pdata;
      }
      void setQdata(int qdata){
        if(qdata<1) this->qdata=1;
        else this->qdata=qdata;
      }
      int getPdata(){
        return pdata;
      }
      int getQdata(){
        return qdata;
      }
  
    Rational operator+(Rational r1){
    Rational t;
        t.pdata=this->pdata*r1.qdata+this->qdata*r1.pdata;
        r1.qdata=this->qdata*r1.pdata;
      return t;
        }
    friend ostream & operator<<(ostream &out, Rational &val);
  }; 
  ostream & operator<<(ostream &out, Rational &val){
    out<<val.getPdata()<<" / "<<val.getQdata();
  }

int main(){
  Rational r1;
  r1.setPdata(17);
  r1.setQdata(21);
  operator<<(cout, r1);
return 0;
}