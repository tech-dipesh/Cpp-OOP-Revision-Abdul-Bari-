// write an program to store an retrieve list of item in a file using vector class:
// class should have:
// name
// price 
// quantity

#include <iostream>
#include <fstream>
using namespace std;
class Program{
  private:
  string name;
  int price;
  int quantity;
  public:

  // this are the accessor and mutators:
  void setName(string val){
  if(val.size()==0)name="default";
        name=val;
  }
  void setPrice(int val){
  if(val<1)price=1;
        price=val;
  }
  void setQuantity(int val){
  if(val<1)quantity=1;
        quantity=val;
  }
  string getName(){
    return name;
  }
  int getPrice(){
    return price;
  }
  int getQuantity(){
    return quantity;
  }
  
  
friend ofstream  &operator<<(ofstream &readfile, Program &p);
friend ifstream  &operator>>(ifstream &readfile, Program &p);
// void getFileValue();
};

ofstream &operator<<(ofstream &readfile, Program &p){
  readfile<<p.name<<endl;
  readfile<<p.price<<endl;
  readfile<<p.quantity<<endl;
  return readfile;
}
ifstream  &operator>>(ifstream &readfile, Program &p){;
cout<<p.getName()<<endl;
cout<<p.getPrice()<<endl;
cout<<p.getQuantity()<<endl;
}
int main(){
  // Program p1("Potato", 12, 85);
  Program p1, p2, p3, p4, p5;

  cout<<p1.getName();
  p1.setName("Portato");
  p1.setPrice(12);
  p1.setQuantity(85);
  p2.setName("Tomato");
  p2.setPrice(4);
  p2.setQuantity(65);
  p3.setName("Onion");
  p3.setPrice(6);
  p3.setQuantity(50);
  p4.setName("Cabbage");
  p4.setPrice(8);
  p4.setQuantity(12);
  p5.setName("CowlyFlower");
  p5.setPrice(4);
  p5.setQuantity(125);

  ofstream outputfile("practice.txt", ios::trunc);
  outputfile<<p1;

  ifstream inputfile("practice.txt");
  inputfile>>p1;


  outputfile<<p2;
  inputfile>>p2;

  outputfile<<p3;
  inputfile>>p3;

  outputfile<<p4;
  inputfile>>p4;
  outputfile<<p5;
  inputfile>>p5;
  outputfile.close();
return 0;
}