// write an program to store and retrive list of item in a file with using the serialization.
// class items should have: name, price, quantity.

#include <iostream>
#include <fstream>
using namespace std;
class Practice{
  string name;
  int price;
  int quantity;
  public:
  Practice(): name(""), quantity(0), price(0){}
  Practice(string name,int quantity, int price){
    this->name=name;
    this->quantity=quantity;
    this->price=price;
  }

    friend  ofstream &operator<<(ofstream &practicefile, Practice &p);
    friend ifstream  &operator>>(ifstream &practicefile, Practice &p);
  };

ofstream &operator<<(ofstream &practicefile, Practice &p){
  try{
    if(p.name.empty()) throw "Please enter the string value: ";
    if( p.quantity<0) throw "Please enter the correct quantity";
    if(p.price<0) throw "Please enter the correct price of the product.";
    practicefile<<p.name<<endl; 
    practicefile<<p.quantity<<endl; 
    practicefile<<p.price<<endl; 
    return practicefile;

  }
  catch(string err){
    cout<<err<<endl;
  }
  catch(...){
    cout<<"Not expected error.";
  }
  
}
  
  ifstream &operator>>(ifstream &readfile, Practice &p){
      readfile>>p.name>>p.quantity>>p.price;
      return readfile;
  }
int main(){
  // Practice p;
  string name;
  int price, quantity;

  int size;
  cout<<"Enter total values: ";
  cin>>size;

  // Practice *pr(size);
  Practice *pr=new Practice[size];


  for(int i=0;i<size;i++){
    cout<<"please enter the name of the product: ";
    cin>>name;
    cin>>quantity;
    cout<<"Please enter the total Quantity of the product: ";
    cin>>price;
    cout<<"Please enter the price of the product: ";
    pr[i]=Practice(name, quantity, price);
  }



  // p.name="Tomato", p.price=98, p.quantity=8;
  ofstream practicefile("practice.txt", ios::app);
  for(int i=0;i<size;i++){
    practicefile<<pr;
  }
  // practicefile.close();
  
  ifstream readfile("practice.txt");
  for(int i=0;i<size;i++){
    // readfile>>*pr;
    readfile>>pr[i];
  }
  practicefile.close();
  readfile.close();
return 0;
}