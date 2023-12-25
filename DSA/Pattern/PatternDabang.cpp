#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENter the Number:";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<"";
        }

        for(int j=1;j<=i-1;j++)
        {
            cout<<"*";
        }

        for(int j=1;j<=i-1;j++)
        {
            cout<<"*";
        }

        for(int j=1;j<=n-i+1;j++)
        {
            cout<<n-i-j+2<<"";
        }
        cout<<endl;

    }
}