#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
            break;
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

    cout<<"Number Present At index:"<<LinearSearch(arr,size,key)<<endl;
}