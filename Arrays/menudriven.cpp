#include<iostream>
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
 void reverse(int array[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<array[i]<<" ";
    }
}
 
 void deletion(int array[],int size){
    cout<<"Enter the position you want to delete from the array"<<endl;
    int pos;    
    cin>>pos;
    for(int i = pos;i<=size-1;i++){
        array[i]=array[i+1];
    }

 }
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
void Binarysearch(int array[], int size) {
    int element;
    cout << "Enter the value you want to search: ";
    cin >> element;

    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] == element) {
            cout << "The element " << element << " found at index " << mid << endl;
            return;
        } else if (array[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Element not found in the array." << endl;
}
void display(int array[],int size){
     for(int i =0;i<size;i++){
         cout<<array[i]<<" ";
     }
 }
 
int main(){
    int array[100];
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0;i<size;i++){
        cin>>array[i];
    }
    cout<<"1.Insertion"<<endl;
    cout<<"2.Deletion"<<endl;
    cout<<"3.Linear Search"<<endl;
    cout<<"4.Binary search "<<endl;
    cout<<"5.Bubble Sort"<<endl;
    cout<<"6.Reverse"<<endl;
    cout<<"Enter to Perform the operation"<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        insert(array,size);
        break;
    case 2:
    deletion(array,size);
    break;
    case 3:
    Linearsearch(array,size);
    break;
    case 4:
    Binarysearch(array,size);
    break;
    break;
    case 5:
    bubblesort(array,size);
    break;
    case 6:
    reverse(array,size);
    break;
    

    




    default:
        break;
    }
    
}