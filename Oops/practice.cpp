#include <iostream>
using namespace std;
class Student{
  int rollno;
  string name;
  int mathmarks;
  int computermarks;
  int programmingmarks;
  public:
  int SumMarks(){
    return mathmarks+computermarks+programmingmarks;
  }
  int Grade(){
    return (mathmarks+computermarks+programmingmarks)/3;
  }
  void setRollNo(int rollno){
    if(rollno<0) this->rollno=1;
    else this->rollno=rollno;
  }
  void setName(string name){
    if(name.size()<1) this->name="Test";
    else this->name=name;
  }
  void setMathmarks(int math){
    if(math<1) this->mathmarks=1;
    else this->mathmarks=math;
  }
  void setComputerMarks(int computer){
    if(computer<1) this->computermarks=1;
    else this->computermarks=computer;
  }
  void setProgrammMarks(int program){
    if(program<1) this->programmingmarks=1;
    else this->programmingmarks=program;
  }

  // getting value if needed:
  int getRoll(){
    return rollno;
  }
  string getName(){
    return name;
  }
  int getMath(){
    return mathmarks;
  }
  int getComputer(){
    return computermarks;
  }
  int getProgram(){
    return programmingmarks;
  }

};
int main(){
   Student s;
  // setting all values:
  s.setRollNo(2413986064);
  s.setName("Dipesh");
  s.setMathmarks(78);
  s.setComputerMarks(89);
  s.setProgrammMarks(99);

  // printing the output:
  cout<<s.SumMarks()<<endl;
  cout<<s.Grade()<<endl;
return 0;
}