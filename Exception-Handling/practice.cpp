// class a class for stack with exceptions
// stack overflow
// stackunderflow

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Stack{
    public:
    stack<int>check;
    int res(vector<int>out){
      if(out.size()) throw "It's a Underflow";
      if(out.capacity()==out.size()) throw "It's a overflow";
      int sum=0;
      for(int i=1;i<out.size();i++){
        check.push(out[i]);
        if(check.top()<100){
          sum+=check.top();
          check.pop();
        }
        else
          check.pop();
      }
      return sum;
    }
};

class ExceptionHandle: public exception{

};
int main(){
  vector<int>res={982, 83, 28, 35, 13, 989, 52, 64, 26, 39, 63, 29};
  Stack s;
  try{
    cout<<s.res(res);
  }
  catch(ExceptionHandle err){
    cout<<"We're facing the erro let us know how will it look.";
  }
return 0;
}