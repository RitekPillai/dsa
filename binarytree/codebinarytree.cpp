#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node(int value ){
        data = value;
        left = NULL;
        right = NULL;

    }
};
 Node* binarytree(){
    int value;
cout<<"Enter the root node "<<endl;
cin>>value;
   
   
    if(value==-1){
        return NULL;
    }else{
        Node * root = new Node(value);
            cout<<"Enter the left child of "<<value<<' ';
            root->left=binarytree();//left
      
             cout<<"Enter the right child of "<<value<<' ';
            root->right=binarytree();//right

 
        return root;
    }
 
    
   
}
void preoder(Node* root){
    if(root!=NULL){
    cout<<root->data<<endl;
    preoder(root->left);
    preoder(root->right);
}
}

void inorder(Node * root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right)
        
    }
}

int main(){

  Node*  root= binarytree();

    preoder(root);

}