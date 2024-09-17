    #include<iostream>
    using namespace std;

    class Node{
        public:
        int data;
        Node * next;
        Node * prev;
        Node(int value){
            data = value;
            next=NULL;
            prev=NULL;
        }
    };
    class LinkedList{
        public:
        Node * head=NULL;
        Node * tail=NULL;
        void  creatingLinkedList(){
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
        void insertatbegin(){
            if(head==NULL){
                head = new Node(5);
            }else{
            Node * newnode = new Node(36);

            newnode->next = head;
            newnode->prev=NULL;
            head=newnode;
    
        }}
        void displaying(){
            Node * temp = head;
            while(temp!=NULL){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL";
        }
    void insertatend(){
        Node * endnode = new Node(60);
    /* Node * temp = endnode;
        temp->prev = tail;
        tail->next=temp;
        tail=temp;

        or
        
        */
    Node * currentnode = head;
    while(currentnode->next!=NULL){
        currentnode=currentnode->next;
    }
    currentnode->next=endnode;
    endnode->prev=currentnode;
    
    }

    void insertatparticularpos(int pos){
        Node * newnode = new Node(70);
        
    }
    };
    int main(){
        LinkedList l;
        l.creatingLinkedList();
        l.insertatbegin();
        l.insertatend();
        l.displaying();
        cout<<endl;

    }

