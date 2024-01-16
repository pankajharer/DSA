#include<iostream>
using  namespace std;

int Power(int a,int b)
{
    if(b==0)
        return 1;

    if(b==1)
        return a;

    int ans=Power(a,b/2);

    if(b&1)
    {
        return a*ans*ans;
    }
    else
    {
        return ans*ans;
    }
}

int main()
{
    int a=2,b=10;

    cout<<""<<Power(a,b);
}