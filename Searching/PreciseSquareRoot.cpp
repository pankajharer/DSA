#include<iostream>
#include<math.h>
using namespace std;

int FindIntegerPart(int key)
{
    int start=0;
    int end=key;
    int ans=0;
    while(start < end)
    {
        int mid=start+(end-start)/2;
        int square=pow(mid,2);
        
        if(square==key)
        {
            return mid;
        }
        
        if(square < key)
        {
           ans=mid;
           start=mid+1;
        }
        else if(square > key)
        {
            end=mid-1;
        }
        

    }
    return ans;

}

double PreciseSquareRoot(int p,int Preciseness,int square)
{
    double ans=p;
    double factor=1;
    for(int i=0;i<Preciseness;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<square;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
    
}


int main()
{
   int square;
   cout<<"Enter the Number:"<<endl;
   cin>>square;
   int IntPart=FindIntegerPart(square);
   int Preciseness=3;
   cout<<"Square Root of "<<square<<" is "<<PreciseSquareRoot(IntPart,Preciseness,square);

   return 0;
}