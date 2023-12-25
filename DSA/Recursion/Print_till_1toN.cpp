#include<iostream>
using namespace std;

int print(int n)
{
    if (n==0)
    {
        return 0;
    }

    

    print(n-1);

    cout<< n << endl;
    
}


int main()
{
    int n;
    cout<<"ENTER THE NUMBER TO PRINT:";
    cin>>n;

    print(n);

    return 0;
}