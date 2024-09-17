#include <iostream>
using namespace std;


void bubblesort(int array[],int size){
    int i, j, temp;
    for(int i =0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }
        }
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

   cout<<"Before Storing:"<<endl;
   display(array,n);
   cout<<endl;
   cout<<"After Storting"<<endl;
    bubblesort(array,n);
    display(array,n);
}