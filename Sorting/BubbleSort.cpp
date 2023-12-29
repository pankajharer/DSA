#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{   
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
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
    int arr[6]={5,7,2,1,9,4};
    cout<<"Array Before Sort:"<<endl;
    Print(arr,n);
    BubbleSort(arr,n);
    cout<<"Array After Sort:"<<endl;
    Print(arr,n);
}