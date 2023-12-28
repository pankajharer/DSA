//Program to find duplicate in array of 1 to n-1 elements 
#include<iostream>
using namespace std;

int main()
{
    int size=6;
    int arr[100]={1,2,2,3,4,5,6};

    int ans=arr[0];

    for(int i=1;i<size;i++)
    {
        ans=ans^ arr[i];
    }

    for(int i=1;i<size;i++)
    {
        ans=ans^i;
    }
    cout<<"Duplicate Number:"<<ans;

}