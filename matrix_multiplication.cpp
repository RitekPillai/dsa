#include <iostream>

using namespace std;

int main()
{
    int m1[10][10],m2[10][10],m3[10][10],row,column;

    cout<<"Enter the number of rows"<<endl;
    cin>>row;

    cout<<"Enter the number of column"<<endl;
    cin>>column;

    cout<<"Enter the firstd matrix"<<endl;

    for(int i =0;i<row;i++)
    {
        for(int j =0;j<column;j++)
        {
            cin>>m1[i][j];
        }
    }

  for(int i =0;i<row;i++)
    {
        for(int j =0;j<column;j++)
        {
            m3[i][j]=0;    

          for(int k=0;k<column;k++)
          {
            m3[i][j] += m1[i][j] * m2[k][j];
          }
        }
        cout<<"\n";
    }

    for(int i=0;i<row;i++)    
{    
for(int j=0;j<column;j++)    
{    
cout<<m3[i][j]<<" ";    
}    
cout<<"\n";    
}    
return 0;  
}    

