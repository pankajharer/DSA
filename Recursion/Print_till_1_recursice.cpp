#include<iostream>
using namespace std;

int print(int n)
{
    if (n==0)
    {
        return 0;
    }

    cout<< n << endl;

    return print(n-1);
    
}


int main()
{
    int n;
    cout<<"ENTER THE NUMBER TO PRINT:";
    cin>>n;

    print(n);

    return 0;
}