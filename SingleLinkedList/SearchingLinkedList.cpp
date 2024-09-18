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
        void DisplayingLinkedList(){
     Node * currentnode = head;
     while (currentnode != NULL) {
        cout<<currentnode->data<<"->";
        currentnode=currentnode->next;
    }
    cout<<"NULL";
    }
    void searching(int info){
        bool found;
        Node * currentnode = head;
        int count;
        while (currentnode!=NULL)
        {
            if(currentnode->data == info){
                cout<<"Element is found at "<<count<<endl;
                found=true;
                break;
                
            }
            
            currentnode=currentnode->next;
            count++;
        }
        if(!found){
            cout<<"Element not found"<<endl;
        }

    }
};
int main(){
    LinkedList obj;
    obj.CreatingLinkedList();
    cout<<"LinkedList:"<<endl;
   obj.DisplayingLinkedList();
   cout<<endl;
  
   cout<<"Enter the value you want to Search"<<endl;
   int search;
   cin>>search;
   obj.searching(search);
 

 return 0;
}