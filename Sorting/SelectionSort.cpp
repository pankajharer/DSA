#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{   
    
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
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
    selectionSort(arr,n);
    cout<<"Array After Sort:"<<endl;
    Print(arr,n);
}