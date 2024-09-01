#include<iostream>
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
        Node * firstnode = new Node(10);
        head=firstnode;
        Node * secoundnode= new Node(20);
        firstnode->next=secoundnode;
        Node *thirdnode=new Node(30);
        secoundnode->next=thirdnode;
        Node *fourthnode=new Node(40);
        fourthnode->next=NULL;
    }
    void displayingLinkedlist()
    {
        Node *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->"<<"";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void insertionatbegin()
    {
        Node * temp = new Node(50);
        temp->next=head;
        head=temp;
    }
};
int main(){
   LinkedList list;
   list.creatingLinkedlist();
   list.insertionatbegin();
   list.displayingLinkedlist();


}