#include<iostream>
#include<vector>
using namespace std;
void rec(vector<vector<int>>& ans,vector<int>& nums,vector<int> helper,int idx){
        if(idx == nums.size()){
            for(int i=0;i<helper.size();i++) cout<<helper[i];
            cout<<endl;
            return;
        }
        rec(ans,nums,helper,idx+1);
        helper.push_back(nums[idx]);
        rec(ans,nums,helper,idx+1);
        helper.pop_back();
    }

    int main(){
        vector<int> nums = {1,2,3,4};
        vector<vector<int>> ans;
        vector<int>helper;
        rec(ans,nums,helper,0);
    }