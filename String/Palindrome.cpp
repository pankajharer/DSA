#include<iostream>
#include<string>
using namespace std;


bool isvalid(char ch)
    {
        if((ch >='a' && ch <='z') || (ch >='A' && ch <='Z') || (ch >='0' && ch <='9'))
        {
            return 1;
        }

        return 0;
    } 

    char toLowercase(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch=ch-'A'+'a';
            
        }
        return ch;
    }
    bool checkPalindrome(string s)
    {
        int i=0;
        int j=s.length()-1;
        bool ans =true;
        while(i<j)
        {
            if(s[i] != s[j])
            {
               ans=false;
            }
            i++;
            j--;
        }

        return ans;
    }
    bool isPalindrome(string s) {
      string temp="";

      for(int i=0;i < s.length();i++)
      {
          if(isvalid(s[i]))
          {
              temp.push_back(toLowercase(s[i]));
          }
      } 
     
      return checkPalindrome(temp);
    }


int main()
{
    string s;
    cout<<"Enter String:";
    cin>>s;
    cout<<"String is Palindrome or not:"<<isPalindrome(s);
    return 0;
}