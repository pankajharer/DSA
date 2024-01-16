#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,4,2,5,7};

    int *ptr=arr;

    cout<<"Address:"<<arr<<endl;
    cout<<"Address At 0:"<<&arr[0]<<endl;
    cout<<"Address At 0:"<<ptr<<endl;

    cout<<"2nd:"<<*(arr+1)<<endl;


    int i=20;
    int *p1=&i;
    int** p2=&p1;

    cout<<"Value:"<<i<<endl;
    cout<<"Value:"<<*p1<<endl;
    cout<<"Value:"<<**p2<<endl;

    cout<<"Address:"<<&i<<endl;
    cout<<"Address:"<<p1<<endl;
    cout<<"Address:"<<*p2<<endl;
     
}