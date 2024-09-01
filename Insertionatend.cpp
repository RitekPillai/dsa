#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

class LinkedList{
    Node * head;
    public:
    LinkedList(){
     head=NULL;
    }
    void creatingLinkedlist()
        
    {
       int array[]={10,20,30,40};
      
       Node * tail;
       if(head == NULL) {
           head = new Node(array[i]);
           tail = head;
       }
       for(int i=1;i<4;i++){
           tail->next = new Node(array[i]);
           tail = tail->next;
       }
    }
    void displayingLinkedlist()
    {
      Node * temp;
      temp=head;
      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

      }
    
    }
    
};
int main(){
   LinkedList list;
   list.creatingLinkedlist();

   list.displayingLinkedlist();
}