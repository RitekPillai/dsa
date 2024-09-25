#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
class DoublyLinkedList{
    public:
    Node * head=NULL;
   
    void createdoublyLinkedList(){
        Node * node1 = new Node(10);
        node1->prev=NULL;
      head=node1;
        Node * node2 = new Node(20);
        node2->prev=node1;
        node1->next=node2;
        Node * node3 = new Node(30);
        node3->prev = node2;
        node2->next = node3;
        Node * node4 = new Node(40);
        node4->prev=node3;
        node3->next=node4;
        Node * node5 = new Node(50);
        node5->prev=node4;
        node4->next=node5;
      
    }
    void deletionatbegin(){
        if(head==NULL){
            cout<<"LL not exsist"<<endl;
        }
        else{
            Node * temp = head;
            head=head->next;
            head->prev=NULL;
            delete temp;
      
        }
        

    
    }
    void deletionatend(){
        if(head==NULL){
            cout<<"LL not exsist"<<endl;
        }else{
            Node * currentnode = head;
            while(currentnode->next != NULL){
                currentnode=currentnode->next;
            }
            currentnode->prev->next=NULL;
            delete currentnode;
        }
    }
    void deletionatparticualrpostion(pos){
        if(head==NULL){
            cout<<"LL not exsist"<<endl;
        }else{
            if(pos==0){
                deletionatbegin();
            }
            else{
                Node * currentnode = head;
                    while(--pos){
                        currentnode=currentnode->next;
                    }
                    currentnode->next=currentnode->next->next;
                    delete currentnode->next;
                    currentnode->next->prev=currentnode;
            }
        }
    }
    void displayDoublyList(){
        Node * temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL";

    }
};

int main(){
    DoublyLinkedList d;
    d.createdoublyLinkedList();
    d.displayDoublyList();
   // d.deletionatend();
   d.deletionatparticualrpostion(3);
        cout<<endl;
        d.displayDoublyList();
}