#include<iostream>
using namespace std;

int main()
{
    int num=10;
    int *ptr=&num;

    cout<<"Number:"<<num<<endl;
    cout<<"Number by Pointer:"<<*ptr<<endl;
    cout<<"Number Address:"<<ptr<<endl;

    num=num+1;
    cout<<"Number:"<<num<<endl;
    cout<<"Number by Pointer:"<<*ptr<<endl;
    cout<<endl;

    *ptr=*ptr+1;
    cout<<"Number:"<<num<<endl;
    cout<<"Number by Pointer:"<<*ptr<<endl;
    cout<<"Number Address:"<<ptr<<endl;

    //Copying Pointer
    int *copy=ptr;
    cout<<"Number by Copy Pointer:"<<*copy<<endl;
    cout<<"Number Address By Copy Pointer:"<<ptr<<endl;
    cout<<endl;

    *copy=*copy+1;

    cout<<"Number by Copy Pointer:"<<num<<endl;
    cout<<"Number Address By Copy Pointer:"<<copy<<endl;


    //Null Pointer
    int *n=0;
    int i=20;;
    n= &i;
    cout<<"Number by Pointer:"<<*n<<endl;


    cout<<"Adress Before Update:"<<n<<endl;
    n=n+1;                       //New Address and Value
    cout<<"Address Update:"<<n<<endl;   
    cout<<"Number by Pointer:"<<*n<<endl;






}