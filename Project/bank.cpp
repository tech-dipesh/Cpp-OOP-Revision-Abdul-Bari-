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
  
  void setPhoneNumber(){
    return phonenumber;
  }
  void setEmail(){
    return email;
  }
  string getName(){
    return name;
  }
  int getTotalBalance(){
    return totalbalance;
  }
  int getAccount(){
    return accountno;
  }
  int getPhoneNumber(){
    return phonenumber;
  }
  string getEmail(){
    return email;
  }


  int OpenAccount();
  int BalanceEnquiry();
  int Deposit();
  int Withdrawl();
  void CloseAccount();
  int ShowAllAccount();
  int Quit();
};
int Bank::OpenAccount(){
      cout<<"Please enter your Full Name: ";
    string res;
    cin>>res;
    name=res;
    cout<<"Please enter your Account Number: ";
    int acc;
    cin>>acc;
    accountno=acc;
    cout<<"Please enter your Phone Number: ";
    int phone;
    cin>>phone;
    phonenumber=phone;
    cout<<"Please enter your Email: ";
    string emailval;
    cin>>emailval;
  email=emailval;
  }
int Bank::BalanceEnquiry(){
    
  }
int Bank::Deposit(){
 cout<<"Please enter the Bank account name: "<<endl;

  }
int Bank::Withdrawl(){
 cout<<"Please enter the Bank account name: "<<endl;

  }
  void Bank::CloseAccount(){
    cout<<"Please enter the Bank account name: "<<endl;
    
  }
  int Bank::ShowAllAccount(){
   cout<<"Please enter the Bank account name: "<<endl;
  
    }
  int Bank::Quit(){

  }

int main(){
  // Bank b("Default", 9, 9824, "default@gmail.com");
  Bank b;
  cout<<"Welcome to the Most Transparent Banking System: ";
  cout<<"1: Open an Account: "<<endl;
  cout<<"2: Check Balance: "<<endl;
  cout<<"3: Deposit Money: "<<endl;
  cout<<"4: Withdraw Money: "<<endl;
  cout<<"5:  Close My Account"<<endl;
  cout<<"6:  Show All Accounts:"<<endl;
  cout<<"7: Quit: "<<endl;

  int choice;
  try
  {
    cin>>choice;
    if(choice!=type_info(int)) throw "Please enter the correct number.";
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what()<<endl;
  }
  
  switch (choice) {
  case 1:
  ofstream outputfile("bank.txt", ios::app);
  outputfile>>b;
  
    b.OpenAccount();
    break;
    case 2:
    b.BalanceEnquiry();
  default:
  cout<<"Please choose any option: ";
    break;
  }
return 0;
}


