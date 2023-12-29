#include<iostream>
using namespace std;

int BinarySearch(int arr[],int key,int start,int end)
{
    
    while(start <= end )
    {
      int mid=(start+end)/2;

      if(arr[mid]==key)
      {
        return mid;
      }
      else if(arr[mid]< key)
      {
        start=mid+1;
      }
      else if(arr[mid]> key)
      {
        end=mid-1;
      }

    }
    return -1;

}

int PivotFind(int arr[],int size)
{
    int start=0;
    int end=size-1;
    
    while(start < end )
    {
      int mid=start+(end-start)/2;

      if(arr[mid] >= arr[0])
      {
        start=mid+1;
      }
      else
      {
        end=mid;
      }

    }
    return start;

}
int main()
{
    int size=6;
    int arr[6]={7,9,1,2,3,4};  //Rotated array
    int key=9;
    
    int pivot=PivotFind(arr,size);

    if(arr[pivot] <=key && arr[size-1]>=key)
    {
      cout<<"Element is Present At Index:"<<BinarySearch(arr,key,pivot,size-1);
    }
    else
    {
      cout<<"Element is Present At Index:"<<BinarySearch(arr,key,0,pivot-1);
    }

    return 0;
    
    
}