#include <iostream>
using namespace std;
// employee derived classes with fulltimie employee with slalray and part time emploee with daily wags.

class Employee{
  string name;
  string branch;
  public:
  void setName(string name){
    if(name.empty()<1) this->name="Default";
    else this->name=name;
  }
  void setBranch(string branch){
    if(branch.empty()<1) this->branch="Default";
    else this->branch=branch;
  }
  string getName(){
    return name;
  }
  string getBranch(){
    return branch;
  }
};
class FullTimeEmployee: public Employee{
  protected:
  int age;
  int joindate;
  public:
  void setAge(int age){
      if(age<1) this->age=age;
      else this->age=age;
  }
  void setJoinDate(int joindate){
      if(joindate<1) this->joindate=1;
      else this->joindate=joindate;
  }
  void setName(string name){
    if(name.empty()<1) setName("Default");
    else setName(name);
  }
  void setBranch(string branch){
    if(branch.empty()<1) setBranch("Default");
    // else this->branch=branch;
    else  
      setBranch(branch);
  }
};
class PartTimeEmployee: protected Employee{
  protected:
  int wage;
  int totalwage;
  public:
    void setWage(int wage){
      if(wage<1) wage=1;
      else this->wage=wage;
    }
    void setTotalWage(int totalwage){
      if(totalwage<1) this->totalwage=1;
      else this->totalwage=totalwage;
    }

      int getWage(){
        return wage;
      }
      int TotalWage(){
        return totalwage;
      }
};

int main(){
  Employee first, second;
  FullTimeEmployee firstfull, secondfull;
  PartTimeEmployee firsthalf, secondhalf;
  first.setName("Dipesh");
  first.setBranch("IT");
  
  firstfull.setName("Gita");
  firstfull.setBranch("Home");
  firstfull.setAge(41);
  firstfull.setJoinDate(20051025);
  firsthalf.setWage(2938238);
  firsthalf.setTotalWage(94294747);

}