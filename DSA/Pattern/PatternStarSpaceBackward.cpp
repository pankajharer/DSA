#include<iostream>
using namespace std;

int main()
{
    int n=0;
    cout<<"Enter the Number:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int space=n-i;
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}