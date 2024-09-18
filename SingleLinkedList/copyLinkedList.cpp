#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class LinkedList{    
    public:
    Node * head=NULL;
    void CreatingALinkedList(){

            Node * Node1 = new Node(10);
        head=FirstNode;
          Node * SecoundNode = new Node(20);
        FirstNode->next=SecoundNode;
          Node * ThirdNode = new Node(30);
        SecoundNode->next = ThirdNode;
          Node * Fourthnode = new Node(40);
            ThirdNode ->next = Fourthnode;
          Node * Fivethnode = new Node(570);
            Fourthnode -> next = Fivethnode;
            Fivethnode ->next = NULL;
    }

    void CopyLinkedList(){
        Node * newhead = head;
        while(newhead!=NULL){
            cout<<newhead->data<<"->";
            newhead=newhead->next;
        }
        cout<<"NULL";
    }
    void DisplayingLinkedList(){
     Node * currentnode = head;
     while (currentnode != NULL) {
        cout<<currentnode->data<<"->";
        currentnode=currentnode->next;
    }
    cout<<"NULL";
    }
    
};

int main(){
    LinkedList obj;
         obj.CreatingALinkedList();
      
            cout<<"Original LinkedList"<<endl;
              obj.DisplayingLinkedList();
              cout<<endl;
            cout<<"Copied LinkedList"<<endl;

              obj.CopyLinkedList();
  
    
}