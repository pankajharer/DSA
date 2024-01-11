#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(a==0)
        return b;

    if(b==0)
        return a;

    while(a>=0 && b>=0)
    {
        if(a>b)
        {
            a=a-b;
        }
        else if(a<b)
        {
            b=b-a;
        }
        else
        {
            return a;
        }
    }
    return 1;
}
int main()
{
    int a,b;
    cout<<"Enter Two Numbers:"<<endl;
    cin>>a>>b;
    cout<<"GCD of Given Numbers "<<GCD(a,b)<<endl;
}