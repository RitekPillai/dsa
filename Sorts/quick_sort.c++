#include<iostream>
using namespace std;

void arraycreation(int arr[],int &end){
    cout<<"Enter the size of the array"<<endl;
    cin>>end;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<end;i++){
        cin>>arr[i];
    }
}

int partition(int arr[],int start, int end){
    int pos=start;
    for(int i =start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;//pos - 1 ie the correct position of the pivet 
}

void quicksort(int arr[],int start ,int end){
    if(start>=end){//  if pivot poistion is start or done  so start will be 0 and end will be pos-1 that is -1 so start>=end
        return ;
    }else{
    int pivot=partition(arr,start,end);
    cout<<"pivot is "<<pivot<<endl;
    quicksort(arr,start,pivot-1);//left side
    quicksort(arr,pivot+1,end);//right size
}
}




void display(int arr[],int size){
    cout<<"The Given  array is: "<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[100];
    int end;
    arraycreation(arr,end);
    quicksort(arr,0,end);
    display(arr,end);
}