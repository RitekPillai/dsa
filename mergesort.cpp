#include<iostream>
using namespace std;

void merge_sort(int array1[],int array2[],int size1,int size2,int array3[])
{
    int i=0,j=0,k=0;
while(i<size1 && j<size2){
   
        if(array1[i]<array2[j]){
            array3[k]=array1[i];

            i+=1;
            k+=1;
        }
            
        else{
            array3[k]=array2[j];
            j+=1;
            k+=1;        
            }
}
           //if j is j>size2 then this while loop will excecute 
                while(i>size1)
                {
                    array3[k]=array1[i];
                    k+=1;
                    i+=1;
                }
            
              //if i is i>size1 then this while loop will excecute 

            while(j<size2)
            {
                array3[k]=array2[j];
                k+=1;
                j+=1;
            }
           
            
}

void input(int array1[],int array2[],int& size1,int& size2)
{
    int i;
 cout<<"Enter the size of the array 1"<<endl;
    cin>>size1;
    cout<<"Enter The Array1"<<endl;
  for(i=0;i<size1;i++)
  {
    cin>>array1[i];
  }
  cout<<"Enter the size of the array 2"<<endl;
  cin>>size2;
  cout<<"Enter the Array2"<<endl;

    for(i=0;i<size2;i++)
    {
        cin>>array2[i];
    }
 
cout<<"Array1:"<<endl;
    for(i=0;i<size1;i++){
        cout<<array1[i]<<"\t";
        
    }
    cout<<endl;
cout<<endl<<"Array2:"<<endl;
    for(i=0;i<size2;i++){
        cout<<array2[i]<<"\t";
    }
    cout<<endl;
}



int main()
{
    
    int size1,size2;
  int array1[5],array2[5],array3[10];
  input(array1,array2,size1,size2);
merge_sort(array1,array2,size1,size2,array3);
int size3=size1+size2;

    cout<<endl<<"Output of Array3:"<<endl;
int i;
    for(i=0;i<size3;i++)
    {
        cout<<array3[i]<<"\t";
    }
   return 0;
}   
