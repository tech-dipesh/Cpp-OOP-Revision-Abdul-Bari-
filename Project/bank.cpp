// this are the things that i must implemenet on my banking system with the io stream with managing the file:
// select one option beloew:1. open an account, 2: Balance Enquiry, 3: Deposit, 4: Withdrawl, 5: Close an account, 6: Show all Account, 7: Quit


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
    
class Bank{
  private:
  static string name;
  static int totalbalance;
  int accountno;
  string email;
  int phonenumber;
  public:
  // Bank(string name, int totalbalance, int accountno, string email){
  //   this->name=name;
  //   this->totalbalance=totalbalance;
  //   this->accountno=accountno;
  //   this->email=email;
  // }
  
  ~Bank();
  void setName(string name){
    if(name.empty())name="Nothing";
    this->name=name;
  }
  // void setTotalBalance(int ){
  //   return totalbalance;
  // }
};
int main(){
  // Bank b("Default", 9, 9824, "default@gmail.com");
  Bank b;
 
return 0;
}


