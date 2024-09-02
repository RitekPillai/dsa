#include <iostream>
using namespace std;

// Insertion at begin
class Node {
public:
    int data;
    Node *next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
    Node *head;
public:
    LinkedList() {
        head = NULL;
    }

    void creatingLinkedlist()
    {
        Node *firstnode = new Node(10);
        head = firstnode;
        Node *secondnode = new Node(20);
        firstnode->next = secondnode;
        Node *thirdnode = new Node(30);
        secondnode->next = thirdnode;
        Node *fourthnode = new Node(40);
        thirdnode->next = fourthnode;
        fourthnode->next = NULL;
    }

    void displayingLinkedlist()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void deletionatend()
    {
        Node * tail=head;
        Node * prev=NULL;
        while(tail->next!=NULL)
        {
            prev=tail;
            tail=tail->next;

        }
        delete tail;
        prev->next=NULL;
        
        
              }
};

int main() {
    LinkedList list;
    list.creatingLinkedlist();
    list.deletionatend();
    list.displayingLinkedlist();
    return 0;
}