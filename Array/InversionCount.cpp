#include<iostream>
using namespace std;


int inversionCount(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    return count;

}
int main()
{
    int arr[5] = {1, 20, 6, 4, 5};
    int size=5;

    cout<<""<<inversionCount(arr,size);

}
