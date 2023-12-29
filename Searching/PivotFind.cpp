#include<iostream>
using namespace std;

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

    cout<<"Pivot Is Present At Index:"<<PivotFind(arr,size);
    
}