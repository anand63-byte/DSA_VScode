#include<iostream>
#include<vector>
using namespace std;
void rec(vector<int>& nums,vector<int> helper,int target,int idx){
            if(target == 0) {
                for(int i=0;i<helper.size();i++) cout<<helper[i]<<" ";
                cout<<endl;
                return;
                }
            if(target<0) return ;
            for(int i=idx;i<nums.size();i++){
                helper.push_back(nums[i]);
                rec(nums,helper,target-nums[i],i+1);
                helper.pop_back();
            }
    }

    int main(){
        vector<int> nums = {2,3,5,6,1,7,4};
        int target = 8;
        vector<int>helper;
        rec(nums,helper,target,0);
    }