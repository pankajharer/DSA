#include<iostream>
#include <algorithm>

using namespace std;

int BinarySearch(int arr[],int key,int start,int end)
{
	
	int mid=start+(end-start)/2;
	
	if(start>end)
	{
		return -1;
	}
	
	if(arr[mid]==key)
	{
		return mid;
	}
    else if(arr[mid]< key)
	{
		BinarySearch(arr,key,mid+1,end);
	}
	else if(arr[mid]>key)
	{
		BinarySearch(arr,key,start,mid+1);
	}
	
	
}


int main()
{
	int size;
	cout<<"Enter Size:";
	cin>>size;
	
	int arr[100000];
	for(int i=0;i<size;i++)
	{
        arr[i]=rand();
	}
	sort(arr, arr+size);
	
	for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	int key;
	cout<<"Enter Element to Search:"<<endl;
	cin>>key;
	
	cout<<"Element is Present at index:"<<BinarySearch(arr,key,0,size-1);
	
}