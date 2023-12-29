#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    
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

int main()
{
    int size;
    int key=0;
    cout<<"Enter Array Size:";
    cin>>size;

    int arr[100];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter Array Element:"<<endl;
        cin>>arr[i];
    }

    cout<<"Enter Element to Search:"<<endl;
    cin>>key;

    cout<<"Number Present At index:"<<BinarySearch(arr,size,key)<<endl;
}