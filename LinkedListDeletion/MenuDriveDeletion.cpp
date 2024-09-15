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
            Fivethnode ->next = NULL;
    }
    void DisplayingLinkedList(){
     Node * currentnode = head;
     while (currentnode != NULL) {
        cout<<currentnode->data<<"->";
        currentnode=currentnode->next;
    }
    cout<<"NULL";
    }
    void Deletionatbegin(){
      
        Node * temp = head;
       
        head=head->next;
        delete(temp);
    }
    void Deletionatend(){
        Node * tail = head;
        Node * prev =NULL;
        while(tail->next!=NULL)
        {
            prev = tail;
            tail=tail->next;

           
        }
           delete tail;
        prev->next =  NULL;
         
    }
    void DeletionAtParticularLocation(int loc){
      Node * currentnode = head;
      if(loc==1){
        Node *dele=head;
        head=head->next;
        delete(dele);
      }
      for(int i = 0;i<loc-1;i++){
        currentnode = currentnode->next;
      }
      Node * temp = currentnode->next;
      Node * temp2 = temp->next;
     currentnode->next=temp2;
   

    }

    };


int main(){
    LinkedList obj;
    obj.CreatingALinkedList();
    cout<<"1.Deletion At Begin"<<endl;
    cout<<"2.Deletion At End"<<endl;
    cout<<"3.Deletion At Particular Location"<<endl;
   
    int num;
    cin>>num;
    switch (num)
    {
    case 1:
      obj.Deletionatbegin();
      obj.DisplayingLinkedList();
      break;
    case 2:
      obj.Deletionatend();
      obj.DisplayingLinkedList();
      break;
    case 3:
    cout<<"Enter the postion you want to Delete"<<endl;
    int pos;
    cin>>pos;
    obj.DeletionAtParticularLocation(pos);
          obj.DisplayingLinkedList();
          break;

    default:
    cout << "Invalid choice" << endl;
      break;
    }
  
    
}