#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int value ){
        data= value;
        next=NULL;
        prev=NULL;
    }
};
class DoublyLinkedList{
    public:
    Node * head=NULL;
    Node * tail=NULL;
    void CreatingADoublyLinkedList(){
        Node * node1 = new Node(10);
        head=node1;
         node1->prev=NULL;
       
        Node * node2 = new Node(20);
        node1->next=node2;
        node2->prev=node1;

        Node * node3 = new Node(30);
        node2->next=node3;
        node3->prev=node2;

        Node * node4= new Node(40);
        node3->next=node4;
        node4->prev=node3;

        Node * node5 = new Node(50);
        node4->next=node5;
        node5->prev=node4;
        tail=node5;
        
    }
    void Displayingforwarddirction(){
        Node * temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;

        }
        cout<<"NULL";
    }
    void DisplayingBackwardDirction(){
        Node * temp = tail;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->prev;
        }
        cout<<"NULL";
    }
};
int main(){
    DoublyLinkedList obj;
    obj.CreatingADoublyLinkedList();
    cout<<"Forward Direction"<<endl;
    obj.Displayingforwarddirction();
        cout<<endl;
    cout<<"Backward Direction"<<endl;

    obj.DisplayingBackwardDirction();
}