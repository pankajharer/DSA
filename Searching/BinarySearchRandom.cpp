#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;

int BinarySearch(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	
	
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]< key)
		{
			start=mid+1;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
	}
	return -1;
}


int main()
{
	int size=6;
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
	
	cout<<"Element is Present at index:"<<BinarySearch(arr,size,key);
	
}