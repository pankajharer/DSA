#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void Bubblesort(int arr[],int size)
{
    if(size<0)
    {
        return ;
    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    Bubblesort(arr,size-1);
}

int main()
{
    int arr[8]={2,5,7,4,1,8,6,3};
    Bubblesort(arr,8);
    for(int i=0;i<8;i++)
    {
        cout<<" "<<arr[i];
    }
}