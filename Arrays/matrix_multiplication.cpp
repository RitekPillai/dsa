#include <iostream>

using namespace std;

void matrixmultiply(int m1[10][10],int m2[10][10],int m3[10][10],int row1 , int column1){
        cout<<"Mutiply of m1 and m2"<<endl;
    for(int i = 0;i<row1;i++){
        for(int j = 0;j<column1;j++){
            for(int k=0;k<column1;k++){
                m3[i][j]=m1[i][j]*m2[i][j];
            }
        }
    }
    
}
    


int main()
{
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
    }
      cout<<"Enter the Secound matrix"<<endl;

    for(int i =0;i<row1;i++)
    {
        for(int j =0;j<column1;j++)
        {
            cin>>m2[i][j];
        }
    }
    matrixmultiply( m1 , m2 ,m3, row1 ,column1);

    for(int i =0;i<row1;i++)
    {
        for(int j =0;j<column1;j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;  
}    

