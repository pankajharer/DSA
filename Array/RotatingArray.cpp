#include<iostream>
#include<vector>
using namespace std;


void rotate(vector<int>& nums,int k) {
        vector<int>temp(nums.size());

        for(int i=0;i<nums.size();i++)
        {
            temp[(i+k) % nums.size()]=nums[i];
        }
        nums=temp;
    }



void print(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++) {
        cout<< nums[i] <<" ";
    }
    cout << endl;
}

int main() {
    int k=3;
    vector<int> nums{1,3,5,7,9};
    

    rotate(nums,k);

    print(nums);


    return 0;
}