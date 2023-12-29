#include<iostream>
#include<math.h>
using namespace std;
int FindSquareRoot(int key)
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


int main()
{
   int square=38;
   cout<<"Square Root of"<<square<<" is :"<<FindSquareRoot(square);


}