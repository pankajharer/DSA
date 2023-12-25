#include<iostream>
using namespace std;

int main()
{
   int n=0;
   cout<<"Enter the Number:";
   cin>>n;
   
   int count=1;
   for(int i=1;i<=n;i++)
   {

   for(int j=1;j<=i;j++)
   {
      cout<<count<<" "; 
      count++; 
   }
   cout<<endl;
   }

}
