#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class stack{
    public:
    Node * top;
    int size;
    stack(){
        top=NULL;
        size=0;
    }

    void push(int value){
        Node * temp= new Node(value);
        temp->next=top;
        top=temp;
        size++;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
        }else{
            Node * temp = top;
            top=top->next;
            cout<<temp->data<<" is popped"<<endl;
            delete temp;
            size--; 
        }
    }

    void display(){
        Node * temp = top; 
     
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};

int main(){
    stack s;
    int values;
    cout<<"Enter the value of a stack"<<endl;
    for(int i =0;i<5;i++){
        cin>>values;
        s.push(values);
    }
    cout<<"Stack elements: "<<endl;
    s.display();
    s.pop();
    cout<<"Stack elements after pop: "<<endl;
    s.display();
    return 0;
}