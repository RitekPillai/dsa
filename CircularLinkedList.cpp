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
        Node * FirstNode = new Node(10);
        head=FirstNode;
          Node * SecoundNode = new Node(20);
        FirstNode->next=SecoundNode;
          Node * ThirdNode = new Node(30);
        SecoundNode->next = ThirdNode;
          Node * Fourthnode = new Node(40);
            ThirdNode ->next = Fourthnode;
          Node * Fivethnode = new Node(50);
            Fourthnode -> next = Fivethnode;
            Fivethnode ->next = head;
    }
    void DisplayingLinkedList(){
     Node * currentnode = head;
     while (true) {
        cout<<currentnode->data<<"->";
        currentnode=currentnode->next;
        if(currentnode->next ==head)
        {
            cout<<"one lap compeleted"<<endl;
            break;
        }
    }}};

    int main(){
        LinkedList obj;
        obj.CreatingALinkedList();
        cout<<"Linked List is: ";
        obj.DisplayingLinkedList();

    }