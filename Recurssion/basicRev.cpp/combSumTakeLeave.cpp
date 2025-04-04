#include<iostream>
#include<vector>
using namespace std;
void rec(vector<int>& nums,vector<int> helper,int target,int idx){
            if(target == 0) {
                for(int i=0;i<helper.size();i++) cout<<helper[i]<<" ";
                cout<<endl;
                return;
                }
            if(target<0 || idx==nums.size()) return ;
            helper.push_back(nums[idx]);
            rec(nums,helper,target-nums[idx],idx);
            helper.pop_back();
            rec(nums,helper,target,idx+1);
            
    }

    int main(){
        vector<int> nums = {2,3,5,6,1,7,4,3};
        int target = 8;
        vector<int>helper;
        rec(nums,helper,target,0);
    }