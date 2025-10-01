#include <iostream>
using namespace std;
int main(){
  // all data type: bool, char, char, short, int long, float, double, long double, void;
  bool boolean=2, tboolean=-2, fboolean=0;
  cout<<boolean<<" "<<fboolean<<" "<<fboolean;
  cout<<endl<<"Now all character: ";
  char value[]="Testing is that correct value";
  // wchar_t wchar[]="Wide character";
  wchar_t wchar[]=L"Wide character";
  char16_t ushort[]=u"Unicode short char: ";
  char32_t lunicode[]=U"Long unicode: ";
  cout<<value<<endl<<wchar<<ushort<<lunicode;
  short sval=283;
  int normal=31763;
  long longint=9823398;
  long long very_long_int=29389243729472307;

  cout<<endl<<"Now Integar value: "<<sval<<normal<<longint<<very_long_int;
  float single_precision=183143.2842;
  double double_precision=92832472.842;
  long double very_long_double_precison=98240712371.52422;
  
  
  void *voidptr;
  cout<<endl<<"Now Float & Void value: "<<endl<<single_precision<<normal<<endl<<double_precision<<endl<<very_long_double_precison<<voidptr;

return 0;
}