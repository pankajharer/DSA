#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Knapsack(vector<int>wt,vector<int>profit,int n,int k)
{
    if(n<0  || k==0)
    {
        return 0;
    }

    if(wt[n] >k)
    {
        return Knapsack(wt,profit,n-1,k);
    }

    return max(profit[n]+Knapsack(wt,profit,n-1,k-wt[n]),Knapsack(wt,profit,n-1,k));
}



int main()
{
    vector<int>profit={8,2,1,4};
    vector<int>wt={4,5,6,1};
    int k=7
    ;

    cout<<"Max Profit:"<<Knapsack(wt,profit,profit.size()-1,k);


}