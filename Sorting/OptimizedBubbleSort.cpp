//Optimized for the best case

#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{   
    
    for(int i=1;i<n;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=true;
                swap(arr[j],arr[j+1]);
            }
        }
    if(swapped==false)
    {
        break;
    }
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
    int arr[6]={1,2,3,4,5,6};
    cout<<"Array Before Sort:"<<endl;
    Print(arr,n);
    BubbleSort(arr,n);
    cout<<"Array After Sort:"<<endl;
    Print(arr,n);
}