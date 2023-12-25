#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    
    
    GCD(b,a%b);
    
}


int main()
{
    int a,b;
    cout<<"ENTER THE NUMBER A:";
    cin>>a;
    cout<<"ENTER THE NUMBER B:";
    cin>>b;

    cout<<""<<GCD(a,b);

    return 0;
}