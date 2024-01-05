
#include<iostream>
using namespace std;


void InsertionSort( int arr[],int n)
{
 
   for(int i=1;i<n;i++)
   {
       int temp=arr[i];
       int j=i-1;
       for(;j>=0;j--)
       {
           if(temp<arr[j])
           {
               arr[j+1]=arr[j];
           }
           else{
               break;
           }
       }
       arr[j+1]=temp;
   }
     
}

void Print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
int main()
{
    int n=6;
    int arr[6]={4,2,6,7,1,3};
    cout<<"Array Before Sort:"<<endl;
    Print(arr,n);
    InsertionSort(arr,n);
    cout<<"Array After Sort:"<<endl;
    Print(arr,n);
}