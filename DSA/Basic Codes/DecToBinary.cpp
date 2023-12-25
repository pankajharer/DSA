#include<iostream>
#include<math.h>
using namespace std;

int DecToBinary(int num)
{
    int ans=0;
    
    int i=0;
    while(num !=0)
    {

    int bit= num & 1;
    ans= (bit * pow(10,i))+ ans;
    num=num>>1;
    i++;

    
    }
    return ans;
}

int main()
{
    int num;
    cout<<"Enter The Number:";
    cin>>num;
 
    cout<<"Binary Number:"<<DecToBinary(num);
    return 0;
}