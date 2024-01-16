#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void Reverse(string& str,int i,int j)
{
    if(i > j)
    {
        return ;
    }

    swap(str[i],str[j]);
    i++;
    j--;
    Reverse(str,i,j);    
}

int main()
{
    string str="pankaj";
    Reverse(str,0,str.length()-1);
    cout<<""<<str;
}