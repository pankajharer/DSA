#include<iostream>
using namespace std;

int FirstOccurence(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start <= end )
    {
      int mid=(start+end)/2;

      if(arr[mid]==key)
      {
        ans=mid;
        end=mid-1;
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
    return ans;

}
int LastOccurence(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start <= end )
    {
      int mid=(start+end)/2;

      if(arr[mid]==key)
      {
        ans=mid;
        start=mid+1;
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
    int size=6;
    int key=3;
    int arr[6]={1,2,3,3,5,6};

    cout<<"First Occurence of "<<i<<:"at Index:"<<FirstOccurence(arr,size,key)<<endl;
    cout<<"First Occurence of "<<i<<:"at Index:"<<LastOccurence(arr,size,key)<<endl;
    
}