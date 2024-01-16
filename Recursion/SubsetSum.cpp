#include<iostream>
#include<vector>
using namespace std;
int  subsetsum(vector<int>arr,int n,int k)
{
    if(n<0)
    {
       if(k==0)
            return true;
       else
            return false; 
    }

    if(arr[n]>k)
    {
        return subsetsum(arr,n-1,k);
    }

    return subsetsum(arr,n-1,k-arr[n])+subsetsum(arr,n-1,k);

}
int main()
{
    vector<int>arr={2,1,3,5,6};
    int k=5;
    cout<<" "<<subsetsum(arr,arr.size()-1,k);
}