#include<iostream>
using namespace std;

int main()
{
   int n=0;
   cout<<"Enter the Number:";
   cin>>n;
   
   
   for(int i=1;i<=n;i++)
   {
     int t=1;
   for(int j=1;j<=i;j++)
   {
      
      cout<<i-t+1<<" "; 
      t++;
   }
   cout<<endl;
   }

}
