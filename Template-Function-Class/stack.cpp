#include <iostream>
#include <stack>
using namespace std;
   template <class T>
   class Stack{
    //  T s[15];
    int top;
    int size;
     T *stacks;

   public:
   Stack(int size){
      this->size=size;
      top=-1;
      stacks=new T[size];
}


      void push(T key);
      T Pop();
      void Display();
   };

   
   template <class T>
   void Stack<T>::push(T key){
    if(top==size-1)
       cout<<"Can't push already full.";
    else{
       top++;
       stacks[top]=key;
   }
   }




template<class T>
T Stack<T>::Pop(){
   T output;
   if(size==-1) cout<<"Stack is empty";
   else {
      output=stacks[top];
      top--;
    }
    return output;
   }
   
   
template<class T>
void Stack<T>::Display(){
for(int i=0;i<size;i++){
     if(stacks[i])
       cout<<stacks[i]<<" ";
   }
}


int main(){
  Stack<float> s(19);
  s.push(19);
  s.push(29);
  s.Pop();
  s.Display();
  // s.Push(19);
  // s.Push(19);
  // s.Push(19);
return 0;
}