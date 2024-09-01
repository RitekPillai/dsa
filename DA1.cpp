#include <iostream>
using namespace std;


int main()
{
    int array[5]= {5,5,3,2,1};
int max=0;
int j;
    for(int i=0;i<5;i++)
    {
        if(array[i]==array[i+1])
        {
            array[i+1]=array[i];

        }

    }
    for( j=0;j<5;j++)
    {
        cout<<array[j]<<"\t";
    }
    
}