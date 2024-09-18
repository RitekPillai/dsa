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
    void CreatingALinkedList(int fv,int sv,int tv,int frv,int fiv ){

            Node * FirstNode = new Node(fv);
        head=FirstNode;
          Node * SecoundNode = new Node(sv);
        FirstNode->next=SecoundNode;
          Node * ThirdNode = new Node(tv);
        SecoundNode->next = ThirdNode;
          Node * Fourthnode = new Node(frv);
            ThirdNode ->next = Fourthnode;
          Node * Fivethnode = new Node(fiv);
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
    Node * mergeLinkedList(LinkedList l1,LinkedList l2){
        Node * head= new Node(0);//instead of check head==NULL;
        Node * tail=head;
        Node * head1=l1.head;
        Node * head2 = l2.head;
        while(head1 && head2){
            if(head1->data <= head2->data){
                tail->next=head1;
                head1=head1->next;
                tail=tail->next;
                tail->next=NULL;
            }   else{
                tail->next=head2;
                head2=head2->next;
                tail=tail->next;
                tail->next=NULL;
            }
            
        }
        if(head1){
            tail->next=head1;
            }else{
                tail->next=head2;
            }
        
        tail=head;
        head=head->next;
        delete tail;
        return head;
    }
    
};

int main(){
    LinkedList obj,obj2,obj3;
    cout<<"LinkedList 1:"<<endl;
        obj.CreatingALinkedList(10,20,30,40,50);
 
    
              obj.DisplayingLinkedList();
              cout<<endl;
               cout<<"LinkedList 2:"<<endl;
     obj2.CreatingALinkedList(60,70,80,90,100);
      
    
              obj2.DisplayingLinkedList();
              cout<<endl;
              
             cout<<"Merged LinkedList:"<<endl;
             
    obj3.head = obj.mergeLinkedList(obj, obj2);
    obj3.DisplayingLinkedList();
    return 0;
}
    
