#include<iostream>
using namespace std;
void transpose(){
    int array[10][10];
    int row,column;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>column;
    cout<<"Enter the elements of the matrix:\n";
    
      for(int i =0;i<row;i++){
        for(int j=0;j<column;j++){
           cin>>array[i][j];
            
        }
        cout<<endl;
    }


    for(int i =0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<array[j][i]<<" ";
            
        }
        cout<<endl;
    }
}
void matrixmultiply(){
    int m1[10][10],m2[10][10],m3[10][10],row1,column1;

    cout<<"Enter the number of rows"<<endl;
    cin>>row1;

    cout<<"Enter the number of column"<<endl;
    cin>>column1;


    cout<<"Enter the firstd matrix"<<endl;

    for(int i =0;i<row1;i++)
    {
        for(int j =0;j<column1;j++)
        {
            cin>>m1[i][j];
        }
        cout<<endl;
    }
      cout<<"Enter the Secound matrix"<<endl;

    for(int i =0;i<row1;i++)
    {
        for(int j =0;j<column1;j++)
        {
            cin>>m2[i][j];
        }
        cout<<endl;
    }
        cout<<"Mutiply of m1 and m2"<<endl;
    for(int i = 0;i<row1;i++){
        for(int j = 0;j<column1;j++){
            for(int k=0;k<column1;k++){
                m3[i][j]=m1[i][j]*m2[i][j];
            }
        }
    }
       for(int i =0;i<row1;i++)
    {
        for(int j =0;j<column1;j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }

}
void addtionofmatrix(){
     int m1[10][10],m2[10][10],m3[10][10],row1,column1;

    cout<<"Enter the number of rows"<<endl;
    cin>>row1;

    cout<<"Enter the number of column"<<endl;
    cin>>column1;


    cout<<"Enter the firstd matrix"<<endl;

    for(int i =0;i<row1;i++)
    {
        for(int j =0;j<column1;j++)
        {
            cin>>m1[i][j];
        }
        cout<<endl;
    }
      cout<<"Enter the Secound matrix"<<endl;

    for(int i =0;i<row1;i++)
    {
        for(int j =0;j<column1;j++)
        {
            cin>>m2[i][j];
        }
        cout<<endl;
    }
    cout<<"Addition of M1 and M2"<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
        }}

          for(int i =0;i<row1;i++)
    {
        for(int j =0;j<column1;j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
}
    

int main(){


    cout<<"1.Tranpose"<<endl;
    cout<<"2.Multiplication"<<endl;
    cout<<"3.Addition"<<endl;
    cout<<"Enter The number to perform operation"<<endl;
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
    transpose();
    break;
    case 2:
    matrixmultiply();

        break;
        case 3:
        addtionofmatrix();
        break;

    
    default:
        break;
    }
}