#include<iostream>
#include<string>
using namespace  std;

char getMaxOccurenceChar(string s)
{
    int arr[26]={0};

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int num=0;
        if(ch >='a' && ch <='z')
        {
           num=ch-'a';
        }
        else
        {
           num=ch-'A';
        }

        arr[num]= arr[num]+1;
    }

    int max=-1;
    int ind=0;

    for(int i=0;i<26;i++)
    {
        if(arr[i]> max)
        {
            max=arr[i];
            ind=i;
        }
            
    }
    
    char ch= 'a'+ ind;
    
    return ch;
}
int main()
{
    string s;
    cout<<"Enter String:";
    getline(cin,s);
    cout<<"Most Frequent Character:"<< getMaxOccurenceChar(s);
    return 0;
}