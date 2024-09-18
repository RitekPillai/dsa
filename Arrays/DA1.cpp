#include <iostream>
using namespace std;


int main()

{
    int count;
    int sum=0;
  
    int array[100]={1,2,3,4,5};
      int max = array[0];
    int min =array[0];

    for(int i=0;i<5;i++)
    {
        count++;
       cout<<array[i]<<'\t';
       sum=sum+array[i];
       

    }
    for(int j=0;j<5;j++){
      if(array[j]>max){
          max=array[j];
      }
    }
for(int i =0;i<5;i++){
    if(array[i]<min){
        min=array[i];
    }
}
    cout<<endl;
    cout<<"sum is "<<sum<<endl;
    cout<<"Max element is "<<max<<endl;
    cout<<"Min element is "<<min<<endl;
    cout<<"total element count "<<count<<endl;
    int avg=sum/count;
    cout<<"Average of Array is "<<avg;

    
}