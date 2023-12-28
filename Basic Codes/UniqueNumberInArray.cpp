//Program to find unique number in duo values
#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int arr[100]={3,1,1,3,4};

    int ans=arr[0];

    for(int i=1;i<size;i++)
    {
        ans=ans^ arr[i];
    }
    cout<<"Unique Number:"<<ans;

}