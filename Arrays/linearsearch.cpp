#include <iostream>
using namespace std;


void Linearsearch(int array[],int size){
    int search;
    cout<<"Enter the value you want search"<<endl;
    cin>>search;
    bool found;

    for(int i =0;i<size;i++){
        if(array[i]==search){
            cout<<"Element is present at index "<<i<<endl;
            found = true;
            break;
        }
       
    }
    if(found==false){
        cout<<"Element is not present in array"<<endl;
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

   cout<<"Array:"<<endl;
   display(array,n);
   cout<<endl;
   Linearsearch(array,n);
}