#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int info)
    {
        data=info;
        next=NULL;
    }

};

class LinkedList{
    Node * head =NULL;
    public:
    void CreatingLinkedList()
    {
        Node * Firstnode = new Node(10);
        head=Firstnode;
        Node * Secoundnode = new Node(20);
        Firstnode->next=Secoundnode;
        Node * Thirdnode = new Node(30);
        Secoundnode->next=Thirdnode;
        Node * Fourthnode = new Node(40);
        Thirdnode->next=Fourthnode;
        Node * Fivethnode = new Node(50);
        Fourthnode->next=Fivethnode;
        Fivethnode= NULL;
    }
    void Insertion(){
      

    }
    
};
int main(){
    LinkedList obj;
    obj.CreatingLinkedList();
   
 

 return 0;
}