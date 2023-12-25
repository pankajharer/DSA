#include<string>
#include<iostream>
using namespace std;


bool linear(int arr[],int size,int f)
{
     if(size == 0)
     {
        return false;
     }

    if(arr[0] == f )
     {
        return true;
     }
     else
     {
        linear(arr+1,size-1,f);
     }

}

int main()
{
    int size=5;
    int arr[5]={4,5,8,5,6};
    int f=10;
    bool check=linear(arr,size,f);
   
    if(check)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }
}