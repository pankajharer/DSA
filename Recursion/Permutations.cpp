 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 
  void permutation (vector<vector<int>>& ans,vector<int>& nums,int index)
    {
        if(index >= nums.size())
        {
            ans.push_back(nums);
            return ;
        }

        for(int j=index;j<nums.size();j++)
        {
            swap(nums[j],nums[index]);
            permutation(ans,nums,index+1);
            swap(nums[j],nums[index]);
        }
    }

int main()
 {
    vector<int>nums={1,2,3};
    vector<vector<int>> ans;
    int index=0;
    permutation(ans,nums,index);
    

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
 }  
       
    