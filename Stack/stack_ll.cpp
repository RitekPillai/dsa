#include<iostream>
using namespace std;
class Node{
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

        Node * temp= new newNode(value);
        temp->next=top;
        top=temp;
        size++;
        cout<<value<<endl;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
        }else{
        Node * temp = top;
        top=top->next;
        delete temp;
    }}
};

int main(){
    stack s;
    int values;
    cout<<"Enter the value of a stack"<<endl;
    for(int i =0;i<5;i++){
        cin>>values;
        s.push(values);
    }
    s.pop();
}