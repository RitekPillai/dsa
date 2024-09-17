#include <iostream>
using namespace std;

     void insert(int array[],int size){
    int value;
    cout<<"Enter the value you want to insert into the array"<<endl;
    cin>>value;
    cout<<"Enter the postion you want to insert the array"<<endl;
    int post;
    cin>>post;
    for(int i = size-1;i>=post;i--){
       array[i+1]=array[i];

    }
    array[post]=value;


 }
 
 void display(int array[],int size){
     for(int i =0;i<size;i++){
         cout<<array[i]<<" ";
     }
 }

int main(){
    int n;
    cout<<"Enter the number of element you want to enter in a array"<<endl;
    cin>>n;
    int array[100];
    cout<<"Enter the element of the array"<<endl;
    for(int i =0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Before the insertion"<<endl;
    display(array,n);
    cout<<"After the insertion:"<<endl;
    insert(array,n);
    n++;
    display(array,n);

}