#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value)
    {
           this->data=value;
            this->next=NULL;

    }

};


class LinkedList{

    Node * head;

    public:
    LinkedList(){
       this->head=NULL;
    }
    void CreatingLinkedList()
    {
        Node* first = new Node(10);
        this->head=first;
        Node * secound = new Node(20);
        secound->next=secound;
        Node * third = new Node(30);
        secound->next=third;
        Node * fourth = new Node(40);
       third->next=NULL;
        

    }


    void DisplayingLinkedList()
    {
        Node * current = this->head;

        while(current != NULL)
        {
            cout<<"Element"<<current->data<<"\n";
            current=current->next;
        }

    }

};


int main(){

    LinkedList l;
    l.CreatingLinkedList();
    l.DisplayingLinkedList();
}