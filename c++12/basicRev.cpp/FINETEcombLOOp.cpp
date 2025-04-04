#include<iostream>
#include<vector>
using namespace std;

//  THIS IS FOR THE FININE ELEMNET USE TO MAKE THE TARGET
void rec(vector<int>& nums,vector<int> helper,int target,int idx){
            if(target == 0) {
                for(int i=0;i<helper.size();i++) cout<<helper[i]<<" ";
                cout<<endl;
                return;
                }
            if(target<0) return ;
            for(int i=idx;i<nums.size();i++){     //jitna nums ka size hai utna loop me chalega
                helper.push_back(nums[i]);
                rec(nums,helper,target-nums[i],i+1);//  here the main change is "i" to "i+1";

                //pehle vaale me jb tk return na ho jaaye i ko hi use kar rahe the return karne ke baad
                //apne aap vo i+1 me update ho jaa rha tha.
                helper.pop_back();  // jb 3 pe jaaye ga i=1 pe to usko pahle maine 2 ko hata diya hai.
            }
    }

    int main(){
        vector<int> nums = {2,3,5,6,1,7,4,3};
        int target = 8;
        vector<int>helper;
        rec(nums,helper,target,0);
    }