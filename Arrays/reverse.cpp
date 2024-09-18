#include<iostream>
using namespace std;


void reverse(int array[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<array[i]<<" ";
    }
}
int main(){
    int array[100];
    int n;
    cout<<"Enter how many element you want to enter a array"<<endl;
    cin>>n;

    cout<<"Enter a  Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    reverse(array,n);
}