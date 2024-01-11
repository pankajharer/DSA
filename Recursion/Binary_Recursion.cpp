#include<string>
#include<iostream>
using namespace std;


bool binary(int arr[],int s,int e,int k)
{
     if(s>e)
     {
        return false;
     }
    
    int mid=(s+e)/2;     

    if(arr[mid] == k )
     {
        return ;
     }
     else if(arr[mid] > k)
     {
        binary(arr,s,mid-1,k);
     }
     else
     {
        binary(arr,mid+1,e,k);
     }
     

}

int main()
{
    int size=5;
    int arr[5]={4,5,8,5,6};
    int f=10;
    bool check=binary(arr,0,size-1,f);
   
    if(check)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }
}