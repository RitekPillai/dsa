#include <iostream>
using namespace std;


int main()
{
    int k=0;
    int ub=5;
   int  array[5]={1,2,3,4,5};
  int  couter = 0;
    while (k<=ub)
    {
        cout<<array[k]<<endl;

        if(couter>k)
        {
            break;
        }
        k=k+1;
        couter++;
    }
    
}