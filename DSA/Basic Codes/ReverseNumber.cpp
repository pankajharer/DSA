#include<iostream>
using namespace std;


int Reverse(int num)
{
    int rev=0;

    while(num!=0)
    {
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;

        
    }
    return rev;
}

int main()
{
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    cout<<Reverse(num)<<"";

    return 0;

}