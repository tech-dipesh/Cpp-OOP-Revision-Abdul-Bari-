#include <iostream>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    static int admNo;
    Student(string fname="Dipesh"){
      admNo++;
      rollno=admNo;
      name=fname;
    }
    void Display(){
      cout<<"Student Name: "<<name<<", Rollno is: "<<rollno<<endl;
    }
};
// int Student::admNo=2413986000;
int Student::admNo=13986000;

int main(){
  Student s("Bikash");
  Student s1("Ashrit");
  Student s2("Abishkar");
  Student s3("Kundan");
  Student s4();
  s.Display();
  s1.Display();
  s2.Display();
  s3.Display();

  // Total student admisssion: with only static member can access:
  cout<<Student::admNo;
return 0;
}