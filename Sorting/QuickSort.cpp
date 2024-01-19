#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;
 
int partition(int arr[],int low,int high)
{
  
  int pivot=arr[high];
  int i=(low-1);
   
  for(int j=low;j<=high;j++)
  {
    
    if(arr[j]<pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
            
void quickSort(int arr[],int low,int high)
{
  if(low<high)
  {
     
    int pi=partition(arr,low,high);
     
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}
              
  
int main() {
 int size=6;
	cout<<"Enter Size:";
	cin>>size;
	
	int arr[100000];

	for(int i=0;i<size;i++)
	{
        arr[i]=rand()%10000;
	}
    for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
    cout<<"\n ################################################################"<<endl;
    cout<<"\n";
    auto startLinear = high_resolution_clock::now();
    quickSort(arr, 0, size-1);
    auto endLinear = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(endLinear - startLinear);
    cout << "Quick Sort Time: " << duration.count() << " nanoseconds" << endl;

    cout<<"Sorted Array:"<<endl;

    for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}

}