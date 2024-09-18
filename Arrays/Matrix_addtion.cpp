#include<iostream>
using namespace std;
void addtionofmatrix(int m1[10][10],int m2[10][10],int m3[10][10],int row ,int column){
    cout<<"Addition of M1 and M2"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
        }}
}
int main(){
    int m1[10][10],m2[10][10],m3[10][10],row,column;
    cout<<"Enter the number of Rows"<<endl;
    cin>>row;
    cout<<"Enter the number of Column"<<endl;
    cin>>column;
    cout<<"Enter the elements of first matrix"<<endl;
    for(int i =0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"Enter the elements of second matrix"<<endl;
    for(int i =0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>m2[i][j];
        }
    }

    addtionofmatrix(m1, m2 , m3, row , column);
     for(int i =0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<m3[i][j]<<" ";
        }

         cout<<endl;

    }
}
