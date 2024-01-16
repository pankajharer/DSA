#include<iostream>
#include<string>
using namespace std;

void Reverse(string str,int size)
{
    if(size < 0)
    {
        return;
    }
    cout<<""<<str[size];
    Reverse(str,size-1);
}

int main()
{
    string str="pankaj";
    Reverse(str,str.length()-1);
}