#include<iostream>
#include<math.h>
using namespace std;

void func1(int num)
{
    num++;
    cout<<"Number is:"<<num<<endl;
}


int main()
{
    int num;
    cout<<"Enter The Number:";
    cin>>num;
 
     func1(num);
   cout<<"Number is:"<<num;
    return 0;
}