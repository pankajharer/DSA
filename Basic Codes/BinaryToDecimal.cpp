#include<iostream>
#include<math.h>
using namespace std;

int BinaryToDecimal(int num)
{
    int ans=0;
    int i=0;
    while(num !=0)
    {

    int bit=num%10;
    if(bit==1)
    {
        ans=ans+(pow(2,i));
    }

    num=num/10;
    i++;

    }
    return ans;
}


int main()
{
    int num;
    cout<<"Enter The Number:";
    cin>>num;
 
    cout<<"Binary Number:"<<BinaryToDecimal(num);
    return 0;
}