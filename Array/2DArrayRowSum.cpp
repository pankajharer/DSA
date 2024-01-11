#include<iostream>
using namespace std;

int RowSum(int arr[][3],int row,int col)
{
  int ans=0;
  for(int i=0;i<row;i++)
    {
       int sum=0;
       
       for(int j=0;j<col;j++)
       {
         sum=sum+arr[i][j];
       }
       cout<<"Sum of Row "<<i<<" "<<sum<<endl;
       
       if(sum>ans)
       {
        ans=sum;
       }
    }
    cout<<"Largest Sum:"<<ans;
 
}
int main()
{
    int arr[3][3];
   
    cout<<"Enter Elements:"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    RowSum(arr,3,3);
}