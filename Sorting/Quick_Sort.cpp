#include<iostream>
#include<algorithm>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot=arr[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }

    int pivotIndex=s+cnt;
    swap(arr[s],arr[pivotIndex]);

    int i=s;
    int j=e;

    while(i <pivotIndex && j>pivotIndex)
    {
        while(i <pivot)
        {
            if(arr[i]<=pivot)
            {
                i++;
            }
        }

        while(j >pivot)
        {
            if(arr[j] > pivot)
            {
                j--;
            }
        }
        if(i <pivotIndex && j>pivotIndex)
        {
        swap(arr[i++],arr[j--]);
        }

    }
    return pivotIndex;
}


void quickSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int p =partition (arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}

int main()
{
    int arr[10]={5,1,3,7,8,9,2,4,0,6};
    int size=10;

    quickSort(arr,0,size-1);
 
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}