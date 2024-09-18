#include<iostream>
using namespace std;

void transpose(int array[10][10], int row , int column){
    for(int i =0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<array[j][i]<<" ";
            
        }
        cout<<endl;
    }
}
int main(){
    int row , column;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>column;
    int arrary[10][10];
  for(int i =0;i<row;i++)
    {
        for(int j =0;j<column;j++)
        {
            cin>>arrary[i][j];
        }
    }


     for(int i =0;i<row;i++)
    {
        for(int j =0;j<column;j++)
        {
            cout<<arrary[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
transpose(arrary,  row , column);
    

}