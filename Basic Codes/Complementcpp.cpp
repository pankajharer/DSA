#include<iostream>
using namespace std;

int Compliment(int num)
{
    int m=num;
    int mask=0;
    
    if(num==0)
    {
        return 1;
    }

    while(m!=0)
    {
       mask= (mask << 1) | 1;
       m=m>>1;
    }

    return ~num & mask;
}


int main()
{
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    cout<<Compliment(num)<<"";

    return 0;

}