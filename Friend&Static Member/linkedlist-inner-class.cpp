#include <iostream>
using namespace std;
    class LinkedList{
      public:
      class Node{
        public:
        int data;
        Node *next;
      };
      LinkedList(){
        
      }
      Node* head=nullptr;
      void InsertatHead(int val){
        Node *temp=head;
        Node *valtemp=new Node();
        valtemp->next=temp;
        valtemp->data=val;
        head=valtemp;
      }
      void DeleteHead(){
        Node *temp=head;
        Node *next=head->next;
        delete temp;
        head=next;
      }
      int NodeCount(){
        Node *temp=head;
        int count=0;
        while(temp){
          count++;
          temp=temp->next;
        }
        return count;
      }
    ~LinkedList(){
        Node *temp=head;
        while(temp){
            temp=temp->next;
            delete temp;
        }
      }
};
int main(){
  LinkedList l;
  l.InsertatHead(29);
  l.InsertatHead(30);
  l.InsertatHead(35);
  l.InsertatHead(40);
  l.InsertatHead(39);

  l.DeleteHead();
  l.DeleteHead();
  l.DeleteHead();

  cout<<l.NodeCount();
  return 0;
}