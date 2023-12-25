#include<string>
#include<iostream>
using namespace std;


int sum(int arr[],int size)
{
    if(size == 0)
    {
        return 0;
    }

    if(size == 1)
    {
        return arr[0];
    }

    int add = arr[0] + sum(arr+1,size-1);

    return add;
}


int main()
{
    int size=5;
    int arr[5]={4,5,8,5,6};
    cout<<""<<sum(arr,size);

    
}