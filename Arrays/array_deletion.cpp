#include <iostream>
using namespace std;


 void deletion(int array[],int size){
    cout<<"Enter the position you want to delete from the array"<<endl;
    int pos;    
    cin>>pos;
    for(int i = pos;i<=size-1;i++){
        array[i]=array[i+1];
    }

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

    cout<<"Before Deletion:"<<endl;
    display(array,n);
    cout<<endl;
    
    deletion(array,n);
    n=n-1;
    cout<<"After the Deletion"<<endl;
    display(array,n);

}