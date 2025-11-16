// this are the things that i must implemenet on my banking system with the io stream with managing the file:
// select one option below:1. open an account, 2: Balance Enquiry, 3: Deposit, 4: Withdrawl, 5: Close an account, 6: Show all Account, 7: Quit


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Global variable to count the total Bank Account:
int totalBankAccount=0;

class Bank{
  private:
  static string name;
  static int totalbalance;
  int accountno;
  static string email;
  static int phonenumber;
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
  
  void setPhoneNumber(int phonenumber){
    this->phonenumber=phonenumber;
  }
  void setEmail(string email){
    this->email=email;
  }
  void setAccountNo(int accountno){
    this->accountno=accountno;
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

  bool CheckCorrectAccount(int accountNumber){
    if(this->accountno!=accountNumber) return false;
    return true;
  }

  int OpenAccount();
  int BalanceEnquiry();
  int Deposit(int b);
  int Withdrawl(int withdraw);
  void CloseAccount();
  int ShowAllAccount();
  int Quit();
};
int Bank::OpenAccount(){
    totalBankAccount++;
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
      return totalbalance;
  }

int Bank::Deposit(int depositbalance){
  totalbalance+=depositbalance;
  return totalbalance;
}
int Bank::Withdrawl(int withdraw){
  totalbalance-=withdraw;
  return totalbalance;
}
void Bank::CloseAccount(){
    delete totalbalance;
    delete accountno;
}
  int Bank::ShowAllAccount(){
    ifstream inputfile(bank.txt);
    for(int i=0;i<totalBankAccount;i++){
        cout<<"full Name: "<<inputfile.name<<"Account Number: "<<inputfile.bankaccount;
    }
}
int Bank::Quit(){
    break;
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
  try{
    cin>>choice;
    if(choice>7 && choice<=1){
      throw "Please only enter the number from 1 to 7.";
    }
    if(tpe!=type(int)) throw "Please only enter the Integar Value.";
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what()<<endl;
  }
  
  int bankaccountnumber;
  switch (choice) {
  case 1:
  ofstream outputfile("bank.txt", ios::app);
  outputfile>>b;
    b.OpenAccount();
    cout<<"You've successfully opened a account";
    break;
    case 2:
    b.BalanceEnquiry();
    cout<<"You've Check your total balance enquiry.";
    break;
    
    
    case 3:
    cout<<"Please enter the Bank account name: "<<endl;
    cin>>bankaccountnumber;
    int depositAmmount;
    cout<<"Please enter the deposit amount: ";
    try{
      if(b.CheckCorrectAccount(bankaccountnumber)){
        cout<<"Your current balance is: "<<b.Deposit(depositAmmount)<<endl;
      }
      else{
        throw "Account Number doesn't match.";
      }
    }
    catch(string err){
      cout<<err<<endl;
    }
    break;
    case 4:
    cout<<"Please enter your account number: ";
    cin>>bankaccountnumber;
    cout<<"Please enter the amount you want to withdraw: ";
    int withdrawamount;
    try{
      
      if(b.CheckCorrectAccount(bankaccountnumber)){
        cin>>withdrawamount;
        cout<<"Withdraw successfully your current balance is"<<b.Withdrawl(withdrawamount); 
      }
      if(b.getTotalBalance()<withdrawamount){
        throw "Insufficient balance.";
      }
      else{
        throw "There's the error while withdraw a amount please try again.";
      }
    }
    catch(string s){
      cout<<s<<endl;
    }
    break;
    case 5:
    cin>>bankaccountnumber;
    if(b.CheckCorrectAccount(bankaccountnumber)){
      b.CloseAccount();
    }
    cout<<"Yo've closed your account.";
    // Show All the account:
    case 6:
    cout<<b.ShowAllAccount();
    break;
  default:
  cout<<"Please choose any option: ";
    break;
  }
return 0;
}


