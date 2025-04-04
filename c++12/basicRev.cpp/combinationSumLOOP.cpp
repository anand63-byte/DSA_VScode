#include<iostream>
#include<vector>
using namespace std;

//  THIS IS FOR THE INFININE ELEMNET USE TO MAKE THE TARGET.  FOR THE FINITE..NEXT
void rec(vector<int>& nums,vector<int> helper,int target,int idx){
            if(target == 0) {
                for(int i=0;i<helper.size();i++) cout<<helper[i]<<" ";
                cout<<endl;
                return;
                }
            if(target<0) return ;
            for(int i=idx;i<nums.size();i++){     //jitna nums ka size hai utna loop me chalega
                helper.push_back(nums[i]);
                rec(nums,helper,target-nums[i],i);
                helper.pop_back();  // jb 3 pe jaaye ga i=1 pe to usko pahle maine 2 ko hata diya hai.
                // ye uss cheej se alag hai jo tum soch rahe the last ka 1 2 hata dega jaise subsequnsce me maine dry run kiya tha "Kamal"
            }
    }

    int main(){
        vector<int> nums = {2,3,5};
        int target = 8;
        vector<int>helper;
        rec(nums,helper,target,0);
    }