#include<iostream>
#include<vector>
using namespace std;

    void subset(vector<int>&nums,int n,vector<vector<int>>&ans,vector<int>&v1)
    {
        if(n < 0)
        {
            ans.push_back(v1);
            return;
        }
        v1.push_back(nums[n]);
        subset(nums,n-1,ans,v1);
        v1.pop_back();
        subset(nums,n-1,ans,v1);
        return ;

    }
    int main() {
        vector<int> nums={1,2,3,4};
        vector<vector<int>>ans;
        vector<int>v1={0};
        subset(nums,nums.size()-1,ans,v1);

        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j< ans[i].size();j++)
            {
                cout<<" "<<ans[i][i];
            }
            cout<<endl;
        }
        
    }