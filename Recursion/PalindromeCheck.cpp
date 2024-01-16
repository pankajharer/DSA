#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool Palindrome(string& str,int i,int j)
{
    if(i > j)
    {
        return true;
    }

    if(str[i]==str[j])
    {
        i++;
        j--;
        Palindrome(str,i,j);
    }
    else
    {
        return false;
    }
        
}

int main()
{
    string str="sos";
    cout<<""<<Palindrome(str,0,str.length()-1);
    
}