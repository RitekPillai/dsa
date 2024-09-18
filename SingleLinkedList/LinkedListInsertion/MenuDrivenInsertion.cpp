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
    void Insertionatbegin(int data){
      Node * temp = new Node(data);
        temp->next = head;
        head=temp;
    
     
 

    }
    void InsertionatEnd(int data){
        Node * temp =head;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = new Node(data);

    }
    void Inerstionatparticularlocation(int loc , int value){
        Node * temp = head;
        loc--;
        while(loc--){
            temp=temp->next;
        }
        Node * temp2 = new Node(value);
        temp2->next = temp->next;
        temp->next  =temp2;
    }
    void DisplayingALinkedList()
    {
        Node * temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
};
int main(){
    LinkedList obj;
    obj.CreatingLinkedList();

    int num;
    cout<<"1.Insertion at begin"<<endl;
    cout<<"2.Insertion at end"<<endl;
    cout<<"3.Insertion at particular location"<<endl;
    cout<<"Enter the section you want to selected"<<endl;
    cin>>num;
   
    switch (num)
    {
    
    case 1:
    obj.Insertionatbegin(0);
        break;
    case 2:
    obj.InsertionatEnd(60);
    break;
    case 3:
    cout<<"Enter the location where you want to insert the value"<<endl;
    int loc;
    cin>>loc;
    cout<<"Enter the value you want to insert"<<endl;
    int value;
    cin>>value;
    obj.Inerstionatparticularlocation(loc,value);
    break;
    default:
        break;
    }


obj.DisplayingALinkedList();


 return 0;
}