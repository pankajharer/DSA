#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number:";
   cin>>n;
    

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           cout<<char('A'+j-1)<<" ";
       }
       cout<<endl;
   }
}