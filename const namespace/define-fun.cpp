#include <iostream>
#define SQR(x) (x*x);
//  can even replace with the string:
#define STRGING(a) #a

// symbolic constant with the if condition:
#define PI 238
// rather i can just deinfe directly:
#ifndef PI 
  #define PI 3.2832
#endif

#define MAX(A, B) (A>B?A:B)


using namespace std;

int main(){
  cout<<SQR(5);
  cout<<endl;
  cout<<STRGING("Dipesh");

  cout<<endl<<PI;


  cout<<endl<<MAX(83, 98);

  // finding the maximum element:

return 0;
}